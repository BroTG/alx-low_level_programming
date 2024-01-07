#include <stdio.h>
/**
*main - Entrance point main
*
*Explanation: printing all single digit numbers of base 10 from 0
*paramter: for and printf
*
*return: always return 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; ++n)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
