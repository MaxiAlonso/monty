#include "monty.h"

/**
 * push - push an element to the stack.
 * @stack: doubly linked list
 * @line_number: number of line wich contain the instruction.
 **/

void push(stack_t **stack, unsigned int line_number)
{
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
	if (stack_queue == 0)
		push_stack(stack, number);
	if (stack_queue == 1)
		push_queue(stack, number);
}

/**
 * push_stack - push an element to the stack.
 * @stack: doubly linked list
 * @number: data to be inserted
 **/

void push_stack(stack_t **stack, int number)
{
	stack_t *new_node;

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
 * push_queue - push an element to the queue.
 * @stack: doubly linked list
 * @number: data to be inserted
 **/

void push_queue(stack_t **stack, int number)
{
	stack_t *new_node, *last_node;

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
	new_node->next = NULL;
	if (*stack == NULL)
	{
		new_node->prev = NULL;
		*stack = new_node;
	}
	else
	{
		last_node = *stack;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->prev = last_node;
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
