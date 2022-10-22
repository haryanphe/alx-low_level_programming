#include "main.h"
/**
  * print_alphabet - print alphabet in lower case
  */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a';  ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

/**
* print_alphabet_x10 - print alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 10; i++)
		print_alphabet();
}
