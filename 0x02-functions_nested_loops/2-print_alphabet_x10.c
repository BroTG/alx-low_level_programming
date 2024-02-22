#include "main.h"
#include <stdio.h>

/**
*print_alphabet_x10 - prints lowercase alphabets 10 times
*parameters: void
*
*Return: void
*/

void print_alphabet_x10(void)
{
	int i;
	char lwc;

	for (i = 1; i <= 10; i++)
	{
		for (lwc = 'a'; lwc <= 'z'; lwc++)
		{
			putchar(lwc);

		}
		putchar('\n');
	}
}

/**
*referencing - citing references
*Reference: ChatGPT
*/
