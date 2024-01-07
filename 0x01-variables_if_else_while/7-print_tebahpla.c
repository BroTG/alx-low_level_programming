#include <stdio.h>
/**
*main - Entrance point main
*
*Explanation: printing lowercase alphabets in reverse
*parameter: for and putchar
*
*Return: always return 0
*/
int main(void)
{
	char revlow;

	for (revlow = 'z'; revlow >= 'a'; --revlow)
	{
		putchar(revlow);

	}
	putchar('\n');
	return (0);

}
