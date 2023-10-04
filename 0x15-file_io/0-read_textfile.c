#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Custom text file reader and writer.
 * @filename: Name of the text file to read.
 * @letters: Number of letters to be processed.
 *
 * Return: The actual number of bytes read and printed.
 *         0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *custom_buf;
	ssize_t custom_fd;
	ssize_t custom_write;
	ssize_t custom_total;

	custom_fd = open(filename, O_RDONLY);
	if (custom_fd == -1)
		return (0);

	custom_buf = malloc(sizeof(char) * letters);
	custom_total = read(custom_fd, custom_buf, letters);
	custom_write = write(STDOUT_FILENO, custom_buf, custom_total);

	free(custom_buf);
	close(custom_fd);
	return (custom_write);
}

