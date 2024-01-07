#include <stdio.h>
/**
*main - Entrance point main
*
*Explanation: printing single digit with putchar
*parameter: for and putchar
*
*Return: always return 0
*/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; ++n)
	{
		putchar(n);

	}
	putchar('\n');
	return (0);

}
