#ifndef LOWCASE
#define LOWCASE
#include <stdio.h>

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <='z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

}

#endif

#ifndef LETTER
#define LETTER

void print_alphabet_x10(void);

#endif
