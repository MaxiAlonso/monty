#include "monty.h"

/**
 * get_fun- selects the correct function
 * to perform the innstruction asked by the user.
 * @token: instruction passed as argument to the program
 * @stack: s
 * @line_number: s
 * Return: pointer to the function that corresponds
 **/

void get_fun(char *token, stack_t **stack, unsigned int line_number)
{
	instruction_t fun[] = {
		{"push", push},
		{"pall", pall},
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
	if (succes == 1)
	{
		printf("L%x: unknown instruction %s\n", line_number, token);
		exit(EXIT_FAILURE);
	}
}
