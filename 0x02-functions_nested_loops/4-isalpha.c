#include <stdio.h>
#include <ctype.h>

/**
*_isalpha - function that checks if its alphabet uppercase or lowercase
*@c: argument to be taken in
*Return: 1 or 0
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
