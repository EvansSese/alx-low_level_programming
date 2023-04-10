#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - Appends text
 * @filename: Name of file
 * @text_content: Text to be appended
 *
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	size_t len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
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
