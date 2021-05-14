#include "monty.h"

/**
* op_code_selector - C - Stacks, Queues - LIFO, FIFO
* @operator: Opcode to be executed
* @element: Argument for the operator
*
* Description: Selects the correct function
* to perform the operation.
* Return: 0 if everything is OK.
*/

int op_code_selector(char *operator, char *element, unsigned int line_number)
{
	int i;
	instruction_t opcode[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{NULL, NULL}};

	for (i = 0; opcode[i].opcode; i++)
	{
		if (strcmp(opcode[i].opcode, operator))
		{
			opcode[i].f(node, line_number);
}
