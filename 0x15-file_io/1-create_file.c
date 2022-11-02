#include "main.h"
int _strlen(char *s);
/**
 * create_file - createds a file
 * @filename: filename
 * @text_content: string to write
 * Return: 1 success -2 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writebytes;
	unsigned int content_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		content_len = 0;
		text_content = "";
	}
	else
		content_len = _strlen(text_content);

	writebytes = write(fd, text_content, content_len);

	if (writebytes == -1)
		return (-1);
	close(fd);

	return (1);
}
/**
 * _strlen - determines lenth of a string
 *
 * @s: characters
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		++len;

	return (len);
}
