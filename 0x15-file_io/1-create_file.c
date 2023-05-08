#include "main.h"
/**
 * create_file - Creates a file
 * @filename: Name of the file
 * @text_content: Text to be written in file
 *
 * Return: Returns 1 if success or -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	size_t len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(fp, text_content, len);
		if (bytes_written == -1 || (size_t)bytes_written != len)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
