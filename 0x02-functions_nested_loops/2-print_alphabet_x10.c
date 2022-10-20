#include "main.h"
/**
* print_alphabet - print alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int xo;
	int xi;

	for (xi = '1'; xi <= '9'; xi++)
		for (xo = 'a'; xo <= 'z'; xo++)
			_putchar(xo);
	_putchar('\n');
}
