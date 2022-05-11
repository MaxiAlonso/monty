#include "monty.h"

/**
 * pint - print the value at the top of the stack.
 * @stack: doubly linked list node structure
 * @line_number: number of line wich contain the instruction..
 **/

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	if (*stack != NULL)
	{
		printf("%d\n", node->n);
	}
	else
	{
		fprintf(stderr, "L%x: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
