#include <stdio.h>

/**
*_putchar - this function prints letters
*@n: argument to be taken in
*Return: n
*/
int _putchar(char n)
{
	putchar(n);
}

/**
*print_sign - prints the sign of a number
*@n: the argument to be taken in
*Return: 1 or 0 or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
/**
*referencing - citing helps
*Reference: ChatGPT
*/
