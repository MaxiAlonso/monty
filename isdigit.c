#include "monty.h"

/**
 *_isdigit - check if a string only contain digits (0 through 9)
 * Return: 1 if str contain only digits
 * @line_number: d
 * @str: string to be checked
 **/

int _isdigit(char *str, unsigned int line_number)
{
	unsigned int i = 0;

	(void) line_number;

	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (-1);
		}
	}
	return (1);
}
