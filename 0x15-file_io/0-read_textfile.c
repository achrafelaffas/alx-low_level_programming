#include "main.h"

/**
* read_textfile - check the code for Holberton School students.
* @filename: file to read and write
* @letters: number of letters to read and write.
* Return: letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t numOflettersToRead;
int file;
char *theText;

if (!filename)
return (0);
theText = malloc(sizeof(char) * letters + 1);
if (theText == NULL)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
{
free(theText);
return (0);
}
numOflettersToRead = read(file, theText, sizeof(char) * letters);
if (numOflettersToRead == -1)
{
free(theText);
close(file);
return (0);
}
numOflettersToRead = write(STDOUT_FILENO, theText, numOflettersToRead);
if (numOflettersToRead == -1)
{
free(theText);
close(file);
return (0);
}
free(theText);
close(file);
return (numOflettersToRead);
}
