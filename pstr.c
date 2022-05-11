#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new line.
 * @stack: doubly linked list node structure
 * @line_number: number of line wich contain the instruction.
 **/

void pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	if (*stack != NULL)
	{
		while (*stack != NULL)
		{
			if ((*stack)->n >= 1 && (*stack)->n <= 127)
			{
				printf("%c", (*stack)->n);
			}
			else
			{
				break;
			}
			*stack = (*stack)->next;
		}
	}
	printf("\n");
}
