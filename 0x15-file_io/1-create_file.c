#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: file content
 * condition: if the file already exists, truncate it
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int find, wt, len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[len])
		len++;

	find = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
	if (find == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	wt = write(find, text_content, len);
	if (wt == -1)
	{
		close(find);
		return (-1);
	}

	close(find);

	return (1);
}
