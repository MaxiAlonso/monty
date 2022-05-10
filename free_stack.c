#include "monty.h"

/**
 * free_stack - frees a stack_t list.
 * @stack: pointer to the head node of the linked list.
 **/

void free_stack(stack_t *stack)
{
	stack_t *next_node;

	while (stack != NULL)
	{
		next_node = stack->next;
		free(stack);
		stack = next_node;
	}
}
