#include <stdio.h>
#include "main.h"

/**
*print_alphabet_x10 - prints lowercase alphabets 10 times
*parameters: void
*
*Return: void
*/

void print_alphabet_x10(void)
{
	for (int i = 1; i <= 10; i++)
	{
		print_alphabet();
	}
}