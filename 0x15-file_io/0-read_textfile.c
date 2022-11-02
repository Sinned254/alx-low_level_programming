#include "main.h"
/**
 * read_textfile - reads a text file and prints to posix stdout
 * @filename: filename
 * @letters: number of letters to read and print
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t readbytes, writebytes;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);

	if (buffer == NULL)
		return (0);
	readbytes = read(fd, buffer, letters);

	if (readbytes == -1)
		return (0);
	buffer[letters + 1] = '\0';
	close(fd);

	writebytes = write(STDOUT_FILENO, buffer, readbytes);

	if (writebytes == -1)
		return (0);

	free(buffer);

	return (readbytes);
}
