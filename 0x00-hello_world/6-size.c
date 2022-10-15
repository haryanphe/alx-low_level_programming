#include <stdio.h>
/**
 *main-size of data
 *Return:0
 */
int main(void)

{
	int i;
	long int w;
	long long int p;
	float d;
	char c;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(p));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));

	return (0);
}
