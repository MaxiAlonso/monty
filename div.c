#include "monty.h"

/**
 * _div - divides the second top element of the stack by the top element.
 * @stack: doubly linked list
 * @line_number: number of line wich contain the instruction..
 **/

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack, *next_node;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		if (node->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			exit(EXIT_FAILURE);
		}
		next_node = (*stack)->next;
		next_node->n /= node->n;
		pop(stack, line_number);
		*stack = next_node;
	}
	else
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
