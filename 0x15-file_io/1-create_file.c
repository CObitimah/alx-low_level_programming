#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * @filename: the name of the file created
 * @text_content: a NULL terminated string ti write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int file_a;
int vletters;
int rwr;
if (!filename)
	return (-1);
file_a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (file_a == -1)
	return (-1);

if (!text_content)
	text_content = "";

for (vletters = 0; text_content[vletters]; vletters++)
	;
rwr = write(file_a, text_content, vletters);
if (rwr == -1)
	return (-1);
close(file_a);
return (1);
}
