#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to STDOUT.
 *
 * @filename: Name of the file to be read.
 * @letters: Number of letters to be read.
 *
 * Return: The actual number of bytes read and printed, 0 if the function fails
 *         or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd, t, w;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fd);
return (0);
}
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}
