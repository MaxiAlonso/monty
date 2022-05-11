#include "monty.h"

/**
 * main - entry point for monty interpreter
 * @argc: number of argunments
 * @argv: arguments
 * Return: always 0
 **/

int number = 0;

int main(int argc, char *argv[])
{
	unsigned int line_number = 0;
	size_t size = 0;
	char *str_line = NULL, *token = NULL, *num = NULL;
	FILE *filetoread;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filetoread = fopen(argv[1], "r");
	if (filetoread == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&str_line, &size, filetoread) != -1)
	{
		token = strtok(str_line, "\n\t ");
		line_number++;
		num = strtok(NULL, "\n\t ");
		if (num != NULL && _isdigit(num, line_number) == 1)
		{
			number = atoi(num);
		}
		if (get_fun(token, &stack, line_number) == 1)
		{
			printf("L%x: unknown instruction %s\n", line_number, token);
		}
	}
	fclose(filetoread);
	free_stack(stack);
	free(str_line);
	return (0);
}