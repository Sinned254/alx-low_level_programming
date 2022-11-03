#include "main.h"
/**
 * main - copy content of file to another
 * @argc: arguments counts
 * @argv: arguments vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	char buffer[1024];
	ssize_t copybytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copybytes = 1;
	while (copybytes)
	{
		copybytes = read(fd1, buffer, 1024);

		if (write(fd2, buffer, copybytes) != copybytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fd1) == -1 || close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
