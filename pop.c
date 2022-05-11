#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @stack: doubly linked list node structure
 * @line_number: number of line wich contain the instruction..
 **/

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	if (*stack != NULL)
	{
		if (node->next != NULL)
		{
			*stack = (*stack)->next;
			(*stack)->prev = NULL;
			free(node);
		}
		else
		{
			*stack = NULL;
			free(node);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
}
