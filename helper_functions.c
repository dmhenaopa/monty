#include "monty.h"
char* remove_whitespaces(char *line)
{
	char *new_line[2000];
	int index = 0, i, j = 0;

	if (line == NULL)
		return NULL;

	if (line[0] == ' ')
	{
		for (i = 0; line[i] != '\0'; i++)
		{
			if (line[i] == ' ')
				index++;
 
			else if (line[i] != ' ')
				break;
		}

		for (i = index; line[i] != '\0' || line[i + 1] != '\0'; i++)
		{
			if (!(line[i] == ' ' && line[i + 1] == ' '))
				*new_line[j++] = line[i];
		}
	}

	else
	{
		for (i = 0; line[i] != '\0' || line[i + 1] != '\0'; i++)
		{
			if (!(line[i] == ' ' && line[i + 1] == ' '))
				*new_line[j++] = line[i];
		}
	}
	new_line[j] = '\0';
	//printf("Text after removing blanks\n%s\n", *new_line);
	return (*new_line);
}


char* remove_newline(char *line)
{
	int length = 0;

	if (line == NULL)
		return (NULL);

	length = strlen(line);
	if (line[length - 1] == '\n')
		line[length - 1] = '\0';

	return (line);
}
