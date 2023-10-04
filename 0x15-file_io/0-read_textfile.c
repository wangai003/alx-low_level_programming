#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads and prints a text file to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL)
        return (0);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
        return (0);

    char *buffer = malloc(letters);
    if (buffer == NULL) {
        fclose(file);
        return (0);
    }

    ssize_t bytes_read = fread(buffer, 1, letters, file);
    if (bytes_read < 0) {
        fclose(file);
        free(buffer);
        return (0);
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written != bytes_read) {
        fclose(file);
        free(buffer);
        return (0);
    }

    fclose(file);
    free(buffer);
    return (bytes_written);
}

