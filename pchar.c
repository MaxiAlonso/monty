#include "monty.h"

/**
 * pchar - prints the char at the top of the stack, followed by a new line.
 * @stack: doubly linked list node structure
 * @line_number: number of line wich contain the instruction.
 **/

void pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack != NULL)
	{
		if ((*stack)->n >= 1 && (*stack)->n <= 255)
		{
			printf("%c\n", (*stack)->n);
		}
		else
		{
			fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
