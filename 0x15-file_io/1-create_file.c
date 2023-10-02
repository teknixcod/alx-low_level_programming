#include "main.h"

/**
 * create_file -  function that creates a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to a string to write to file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int k, j, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	k = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(k, text_content, len);

	if (k == -1 || j == -1)
		return (-1);

	close(k);

	return (1);
}

