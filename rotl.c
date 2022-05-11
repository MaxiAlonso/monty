#include "monty.h"

/**
 * rotl - rotates the stack to the top..
 * @stack: doubly linked list node structure
 * @line_number: number of line wich contain the instruction..
 **/

void rotl(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *new_node, *last_node;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		new_node = malloc(sizeof(stack_t));

		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		if (*head == NULL)
		{
			new_node->prev = NULL;
			new_node->next = NULL;
			*head = new_node;
		}
		else
		{
			last_node = *head;
			while (last_node->next != NULL)
			{
				last_node = last_node->next;
			}
			last_node->next = new_node;
			new_node->prev = last_node;
			new_node->next = NULL;
		}
	}
}
