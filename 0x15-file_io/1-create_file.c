#include "main.h"

/**
  * create_file - creates a file or truncates it
  * @filename: the name of the file to create
  * @text_content: NULL terminated string to write to file
  * Return: 1 on succes, -1 on failue
  */

int create_file(const char *filename, char *text_content)
{
	int file, len = 0, check = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		check = write(file, text_content, len);
	}
	close(file);
	if (check != len)
		return (-1);

	return (1);
}
