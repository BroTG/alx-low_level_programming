#include <stdio.h>
/**
*main - Entrance point
*
*Explanation: to display lowercase alphabets with putchar
*parameter: putchar
*
*Return: Always return 0
*/
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; ++alph)
	{
		putchar(alph);

	}
	putchar('\n');

	return (0);

}
