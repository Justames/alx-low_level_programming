#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    int fd;
    ssize_t read_bytes, written_bytes;
    char *buffer;

    /* Validate filename */
    if (filename == NULL)
    {
        return 0;
    }

    /* Open the file */
    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return 0;
    }

    /* Allocate memory for the buffer */
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(fd);
        perror("Error allocating memory");
        return 0;
    }

    /* Read the file */
    read_bytes = read(fd, buffer, letters);
    if (read_bytes == -1)
    {
        free(buffer);
        close(fd);
        perror("Error reading file");
        return 0;
    }

    /* Write to standard output */
    written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
    if (written_bytes == -1 || written_bytes != read_bytes)
    {
        free(buffer);
        close(fd);
        perror("Error writing to stdout");
        return 0;
    }

    /* Clean up */
    free(buffer);
    close(fd);

    return written_bytes;
}

