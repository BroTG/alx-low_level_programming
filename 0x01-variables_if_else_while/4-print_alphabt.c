#include <stdio.h>
/**
*main - Entrance point 
*
*Explanation: display lowercase alphabet excpt q and e
*prameter for if and putchar
*
*Return: always return 0
*/
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; ++lower)
	{
		if (lower == 'q' || lower == 'e')
			continue;

		putchar(lower);

	}
	putchar('\n');

	return (0);

}
