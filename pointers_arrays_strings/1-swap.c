/**
 * swap_int -  function that swaps the values of two integers.
 * @a: number 1
 * @b: number 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
