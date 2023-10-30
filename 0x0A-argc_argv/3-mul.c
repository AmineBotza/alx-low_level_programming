#include <stdio.h>
#include <stdlib.h>
/**
  *main - Prints multiplication of two numbers
  *@argc: input
  *@argv: input
  *
  *Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
	printf("%d\n", result);
	}
	return (0);
}
