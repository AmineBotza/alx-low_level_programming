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
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
