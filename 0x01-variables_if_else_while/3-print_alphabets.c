#include <stdio.h>
/**
  *main - Entry point
  *
  *Description: this generate alphabet in lower then upper case.
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
