#include <stdio.h>
/**
 * size of data
 **/
int main(void)

{
	int i;
	float d;
	char c

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %lu.\n", (signed long)sizeof(i));
	printf("Size of a float: %lu.\n", (unsigned)sizeof(d));

	return(0);
}
	


