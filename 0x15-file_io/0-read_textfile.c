#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

//write a function that reads a text file and prints it into the posix standard output
//'letters' - number of letters it should read and print
//return value = no of letters it could read and print
//return 0 if file cant be opened or read
//return 0 if filename is null
//return 0 if write fails
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t read_bytes, written_bytes;
    char *buffer;

    // Validate filename

        return 0;
    }

    // Open the file
    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        return 0;
    }

    // Allocate a buffer to hold the file content
    buffer = malloc(sizeof(char) * letters);
    if (buffer==NULL)
    {
        close(fd);
        return 0;
    }

    // Read the file into the buffer
    read_bytes = read(fd, buffer, letters);
    if (read_bytes == -1)
    {
        free(buffer);
        close(fd);
        return 0;
    }

    // Write the buffer content to standard output
    written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
    if (written_bytes == -1 || written_bytes != read_bytes)
    {
        free(buffer);
        close(fd);
        return 0;
    }

    // Clean up resources
    free(buffer);
    close(fd);

    return written_bytes;
}
