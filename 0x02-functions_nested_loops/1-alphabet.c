#include <stdio.h>
#include "main.h"

/**
* print_alphabet - prints lowercase alphabets
* parameter: void
*
* Return: void
*/
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

}
