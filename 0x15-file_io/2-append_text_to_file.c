#include "main.h"

/**
 * append_text_to_file - function that appends text at the end
 * of a file
 * @filename: name of the file
 * @text_content: a NULL terminated string to add at the end
 * of the file
 * Return: 1 (success), -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_a;
	int vletters;
	int rwr;

	if (!filename)
		return (-1);

	file_a = open(filename, O_WRONLY | O_APPEND);

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
