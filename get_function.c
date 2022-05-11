#include "monty.h"

/**
 * get_fun- selects the correct function
 * to perform the innstruction asked by the user.
 * @token: instruction passed as argument to the program
 * @stack: s
 * @line_number: s
 * Return: pointer to the function that corresponds
 **/

int get_fun(char *token, stack_t **stack, unsigned int line_number)
{
	instruction_t fun[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{NULL, NULL}
	};

	int i = 0, succes = 1;

	while (fun[i].opcode != NULL)
	{
		if (strcmp(fun[i].opcode, token) == 0)
		{
			fun[i].f(stack, line_number);
			succes = 0;
		}
		i++;
	}
	return (succes);
}
