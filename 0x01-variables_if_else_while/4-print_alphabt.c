#include <stdio.h>
/**
 * main - Print aplhabet a to z except q and e
 * return:0
*/
int main(void)
{
	char bc;

	for (bc = 'a'; bc = 'z'; bc++)
{
	if (bc != 'q' && bc != 'e')
	putchar(bc);
}
	putchar('\n');
	return (0);
}
