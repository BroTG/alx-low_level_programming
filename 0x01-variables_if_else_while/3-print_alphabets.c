#include <stdio.h>
/**
*main - Entrance point main
*
*Explanation: to display lowercase and uppercase letters
*parameter: for and putchar
*
*Return: always return 0
*/
int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; ++lower)
	{
		putchar(lower);

	}
	for (upper = 'A'; upper <= 'Z'; ++upper)
	{
		putchar(upper);

	}
	putchar('\n');
	return (0);

}
