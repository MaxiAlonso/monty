#include "monty.h"

/**
 * mul - multiplies the second top element of the stack with the top.
 * @stack: doubly linked list node structure
 * @line_number: number of line wich contain the instruction..
 **/

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack, *next_node;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		next_node = (*stack)->next;
		next_node->n *= node->n;
		pop(stack, line_number);
		*stack = next_node;
	}
	else
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
