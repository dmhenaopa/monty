#include "monty.h"

/**
* tokenizator - C - Stacks, Queues - LIFO, FIFO
* @line: The entire line obtained with getline
* @counter_line: The number of line
*
* Description: Tokenize the line obtained with getline
* Return: 0 if everything is OK. Otherwise -1.
*/

int tokenizator(char *line, unsigned int line_number)
{
	int counter_token = 0, i = 0;
	char *token = NULL, **buffer = NULL;

	/* Tokenize */
	buffer = malloc(sizeof(char *) * 1024);
	token = strtok(line, " ");
	while (token != NULL)
	{
		buffer[i++] = token;
		token = strtok(NULL, " ");
	}
	buffer[i] = NULL;
	printf("%s", token);
	for (i = 0; buffer[i] != NULL && buffer[i + 1] != NULL; i++)
	{
		if (isspace(*buffer[i]) == 0)
		{
			printf("%s %s\n", buffer[i], buffer[i + 1]);
			break;
		}
		else if (isspace(*buffer[i]) != 0)
			continue;
	}
	return (0);
}
