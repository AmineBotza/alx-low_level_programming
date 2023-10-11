#include"main.h"
/**
  *int _isalpha - Checks for alpha charaters
  *
  *@c: The character to be checked
  *
  *Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else if (c >= 98 && c <= 122)
	{
	return (1);
	}
	return (0);
}
