/**
  * swap_int - swaps the value of two integers
  * @a: int a
  * @b: int a
  * Return: 0
  */
void swap_int(int *a, int *b);
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}