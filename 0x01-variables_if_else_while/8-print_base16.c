#include <stdio.h>
/**
*main - Entrance point main
*
*Explanation: printing base 16 numbers in lowercase
*parameter: using for and putchar
*
*Return: always return 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 16; ++i)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');
	return (0);
}
