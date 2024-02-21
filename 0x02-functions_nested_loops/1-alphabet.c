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

/**
*main - Entrance point main
*
*Explanation: function to display lowercase alphabets
*parameter: function print_alphabet and putchar
*
*Return: always return 0
*/
int main(void)
{
	print_alphabet();

	return (0);

}
