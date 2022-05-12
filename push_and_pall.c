#include "monty.h"

/**
 * push - push an element to the stack.
 * @stack: doubly linked list
 * @line_number: number of line wich contain the instruction.
 **/

void push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *new_node;
	char *num;
	int number = 0;

	num = strtok(NULL, " \t\n");
	if (num == NULL || _isdigit(num) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	number = atoi(num);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		if (*stack != NULL)
		{
			free_stack(*stack);
		}
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

	if (*stack == NULL)
		return;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
	}

}
