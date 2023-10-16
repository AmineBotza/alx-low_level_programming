#include"main.h"
/**
  * swap_int - the program swaps two integers's value
  *
  *@a: the first integer's value
  *@b: the second integer's value
  *
  *Return: nothing
  */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
