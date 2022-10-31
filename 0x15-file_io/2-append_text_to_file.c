#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: Filename
  * @text_content: text added
  *
  * Return: 1 if the file exists, -1 if the fiel does not exist
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int letter;
	int bet;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return- (-1);

	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++)
			;
		bet = write(op, text_content, letter);

		if (bet == -1)
			return (-1);
	}
	close(op);

	return (1);
}
