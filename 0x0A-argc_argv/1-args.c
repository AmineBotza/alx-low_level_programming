#include <stdio.h>
/**
  *main - Entry point
  *@argc: input
  *@argv: Vector of array argument
  *
  *Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
