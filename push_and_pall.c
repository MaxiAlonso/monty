#include "monty.h"

/**
 * push - push an element to the stack.
 *
 * @stack: doubly linked list node structure
 * @line_number: number of line wich contain the instruction.
 **/

void push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = number;
	new_node->prev = NULL;
	if (*stack == NULL)
	{
		new_node->next = NULL;
		*stack = new_node;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
}

/**
 * pall - print all the values on the stack, starting from the top.
 * @stack: doubly linked list node structure
 * @line_number: number of line wich contain the instruction..
 **/

void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *node = *stack;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}