#include "monty.h"

/**
 * add - add the top two elements of the stack.
 * @stack: doubly linked list node structure
 * @line_number: number of line wich contain the instruction..
 **/

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack, *next_node;

	if (stack != NULL && (*stack)->next != NULL)
	{
		next_node = (*stack)->next;
		next_node->n += node->n;
		pop(stack, line_number);
		*stack = next_node;
	}
	else
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
