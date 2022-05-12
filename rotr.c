#include "monty.h"

/**
 * rotr - rotates the stack to the bottom.
 * @stack: doubly linked list.
 * @line_number: number of line wich contain the instruction.
 **/

void rotr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *new_node, *last_node;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		new_node = malloc(sizeof(stack_t));
		if (new_node == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		last_node = *stack;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		new_node->n = last_node->n;
		new_node->prev = NULL;
		new_node->next = *stack;
		*stack = new_node;
		last_node->prev->next = NULL;
		free(last_node);
	}
}
