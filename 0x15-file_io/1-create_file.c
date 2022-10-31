#include "main.h"

/**
  * create_file - create file
  * @filename: filename
  * @text_content: content wrote in the file
  *
  * Return: 1, otherwise -1
  */
int create_file(const char *filename, char *text_content)
{
	int op;
	int letter;
	int bet;

	if(!filename)
		return (-1);

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if(op == -1)
		return (-1);

	if(!text_content)
		text_content = "";

	for (letter = 0; text_content[letter]; letter++)
		;
	bet = write(op, text_content, letter);

	if (bet == -1)
		return (-1);

	close(op);

	return (1);
}
