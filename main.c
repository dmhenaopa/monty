#include "monty.h"

/**
* main - C - Stacks, Queues - LIFO, FIFO
* @argc: Number of arguments
* @argv: Array with arguments
*
* Description: Entry point of Monty Bytecode files
* interpreter.
* Return: 0 if everything is OK. Otherwise EXIT_FAILURE
*/

int main(int argc, char **argv)
{
	FILE *document;
	char *line = NULL;
	size_t size = 0;
	unsigned int line_number = 0;

	/* Verify if the number of arguments is 2 */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	/* Verify if the file can be read */
	else
	{
		document = fopen(argv[1], "r");
		if (document == NULL)
		{
			fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}

		else
		{
			while (getline(&line, &size, document) != -1)
			{
				line_number++;
				/*if (isspace(*line) == 0)
				{*/
					remove_newline(line);
					remove_whitespaces(line);
					tokenizator(line, line_number);
				/*}*/
			}
		}
	}
	fclose(document);
	return (0);
}
