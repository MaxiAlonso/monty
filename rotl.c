#include "monty.h"

/**
 * rotl - rotates the stack to the top..
 * @stack: doubly linked list node structure
 * @line_number: number of line wich contain the instruction..
 **/

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node, *last_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	new_node->n = (*stack)->n;
	if (*stack == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*stack = new_node;
	}
	else
	{
		last_node = *stack;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
		new_node->prev = last_node;
		new_node->next = NULL;
	}
	pop(stack, line_number);
}

