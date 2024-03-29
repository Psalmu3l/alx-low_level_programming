#include "main.h"

/**
  * create_file - A function that creates a file
  * with rw------- permissions
  * @text_content: the text file content.
  * @filename: name of the file, if NULL, return   * -1
  * Return: 1 on success, -1 on failure
 **/

int create_file(const char *filename, char *text_content)
{
	int new, len, wr_stat;

	if (filename == NULL)
		return (-1);

	new = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(new);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;
	wr_stat = write(new, text_content, len);
	if (close(new) == -1)
		return (-1);
	return (wr_stat == -1 ? -1 : 1);
}
