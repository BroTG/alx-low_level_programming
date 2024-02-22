#include <stdio.h>

#ifndef PUTCHAR
#define PUTCHAR

int _putchar(char b);

#endif

#ifndef LOWCASE
#define LOWCASE

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
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

#ifndef LWC
#define LWC

int _islower(int c);

#endif

#ifndef ISALPHA
#define ISALPHA

int _isalpha(int c);

#endif

#ifndef SIGN
#define SIGN

int print_sign(int n);
#endif
/**
*referencing - for citing helps
*Reference: ChatGPT
*/
