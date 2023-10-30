#include <stdio.h>
/**
  *main - Entry point
  *@argc: Counts th number of arguments
  *@argv: Vector of array argument
  *
  *Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		printf("Number of arguments : %d\n", argc - 1);
	}
	else
	{
		printf("No arguments provided.\n");
	}
	return (0);
}
