#include "main.h"
/**
* print_alphabet_x10 - print alphabet 10 times
*/
void print_alphabet_x10(void)
{
	char xo;
	int xi;

	while (xi++ <= '9')
	for (xo = 'a'; xo <= 'z'; xo++)
	_putchar(xo);
	_putchar('\n');
}
