#include "monty.h"

/**
* tokenizator - C - Stacks, Queues - LIFO, FIFO
* @line: The entire line obtained with getline
* @counter_line: The number of line
*
* Description: Tokenize the line obtained with getline
* Return: 0 if everything is OK. Otherwise -1.
*/

int tokenizator(char *line, int counter_line)
{
	int counter_token = 0, i = 0;
	char *token = NULL, **buffer[1024];

	/* Tokenize */
	token = strtok(line, " ");
	while (token != NULL)
	{
		printf("%s", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
