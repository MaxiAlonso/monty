#include "monty.h"

/**
 * swap - swap the top two elements of the stack.
 * @stack: doubly linked list node structure
 * @line_number: number of line wich contain the instruction..
 **/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack, *next_node;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		next_node = node->next;
		node->prev = *stack;
		node->next = next_node->next;
		next_node->prev = NULL;
		next_node->next = node;
		(*stack) = next_node;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
}
