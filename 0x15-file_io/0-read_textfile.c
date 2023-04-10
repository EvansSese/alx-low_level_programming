#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - Reads file
 * @filename: Name of the file
 * @letters: Number of letters to read
 *
 * Return: Number of letters read or printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buff;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buff = (char *)malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
		return (0);
	bytes_read = read(fp, buff, letters);
	if (bytes_read == -1)
	{
		free(buff);
		close(fp);
		return (0);
	}
	buff[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buff);
		close(fp);
		return (0);
	}
	free(buff);
	close(fp);
	return (bytes_read);
}
