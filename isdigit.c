#include "monty.h"

/**
 *_isdigit - check if a string only contain digits (0 through 9)
 * Return: 1 if str contain only digits 0 otherwise.
 * @num: string to be checked
 **/

int _isdigit(char *num)
{
	unsigned int i = 0;

	while (num[i] != '\0')
	{
		if (num[i] == '-')
		{
			i++;
		}
		if (num[i] >= '0' && num[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
