#include "monty.h"

/**
 * _stack - set stack_queue variable to 0 to indicate stack mode.
 * @stack: doubly linked list
 * @line_number: number of line wich contain the instruction.
 **/

void _stack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	stack_queue = 0;
}

/**
 * queue - set stack_queue variable to 1 to indicate queue mode.
 * @stack: doubly linked list
 * @line_number: number of line wich contain the instruction.
 **/

void queue(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	stack_queue = 1;
}
