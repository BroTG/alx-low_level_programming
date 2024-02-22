#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*_islower - checks for lowercase letters and returns either 1 or 0
*parameter: c is the argument to be taken in
*@c: the letter to be taken in
*
*Return: 1 0r 0
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
*refencing - citing help
*Referencing: ChatGPT Amanuel cohort 22 recording
*/
