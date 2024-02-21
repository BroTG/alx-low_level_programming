#include <stdio.h>
#include "main.h"
#include "1-alphabet.c"

/**
*print_alphabet_x10 - prints lowercase alphabets 10 times
*parameters: void
*
*Return: void
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		print_alphabet();
	}
}
