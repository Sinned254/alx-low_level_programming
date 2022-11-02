#include "main.h"
int _strlen(char *s);
/**
 * append_text_to_file - append text at the end of the file
 * @filename: filename
 * @text_content: string to append
 * Return: 1 success -1 any failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t appendbytes;
	unsigned int strlen;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	strlen = _strlen(text_content);

	appendbytes = write(fd, text_content, strlen);
	if (appendbytes == -1)
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
