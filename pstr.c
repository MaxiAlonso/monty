#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new line.
 * @stack: doubly linked list node structure
 * @line_number: number of line wich contain the instruction.
 **/

void pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *node = *stack;

	if (*stack != NULL)
	{
		while (node != NULL)
		{
			if (node->n >= 1 && node->n <= 127)
			{
				printf("%c", node->n);
			}
			else
			{
				break;
			}
			node = node->next;
		}
	}
	printf("\n");
}
