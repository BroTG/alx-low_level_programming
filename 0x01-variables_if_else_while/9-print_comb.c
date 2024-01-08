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

	for (a = 0; a <= 9; ++a)
	{
		putchar('0' + a);
		putchar(44);
		putchar(32);

	}
	putchar('\n');
	return (0);
}
