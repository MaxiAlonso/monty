#include "monty.h"

int stack_queue = 0;

/**
 * main - entry point for monty interpreter
 * @argc: number of argunments
 * @argv: arguments
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	unsigned int line_number = 0;
	size_t size = 0;
	char *str_line = NULL, *token = NULL/*, *num = NULL*/;
	FILE *filetoread;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filetoread = fopen(argv[1], "r");
	if (filetoread == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&str_line, &size, filetoread) != -1)
	{
		line_number++;
		token = strtok(str_line, " \t\n");
		if (token == NULL || token[0] == '#')
			continue;
		if (get_fun(token, &stack, line_number) == 1)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
			free_stack(stack), free(str_line), fclose(filetoread);
			exit(EXIT_FAILURE);
		}
	}
	free_stack(stack), free(str_line), fclose(filetoread);
	return (0);
}
