#include <stdio.h>
/**
*main - Entrance point main
*
*Explanation: printing all possible combinations of single digit numbers
*parameter: putchar and ...
*
*Return: always return 0
*/
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; ++a)
	{
		for (b = 0; b <= 9; ++b)
		{
			putchar(a);
			putchar(b);
			putchar(',' + ' ');
		}

	}
	putchar('\n');
	return (0);
}
