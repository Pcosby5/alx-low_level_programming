#include "main.h"
/**
 * read_textfile - reads a text file and prints it ot the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: returns the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * (letters + 1));
	int fp, byteRead;

	if (filename == NULL || buffer == NULL || letters <= 0)
		return (0);
	fp = open(filename, O_RDONLY | O_CREAT, 00400);
	if (fp == -1)
		return (0);
	byteRead = read(fp, buffer, letters);
	if (byteRead == -1)
		return (0);
	buffer[letters + 1] = '\0';
	write(STDOUT_FILENO, buffer, byteRead);
	free(buffer);
	close(fp);
	return (byteRead);
}
