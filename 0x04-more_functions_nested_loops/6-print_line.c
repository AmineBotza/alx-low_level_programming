#include"main.h"

/**
  *print_line - prints a straight line
  *
  *@n: input integer
  *
  *Return: _ if n > 0 otherwise \n
  */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
