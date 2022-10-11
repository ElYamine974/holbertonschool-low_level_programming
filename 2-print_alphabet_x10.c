#include "main.h"
/**
*print_alphabet -> prints lowercase alphabets
*/
void print_alphabet_x10(void)
{
	int j;
	int p;
	for (p = 0 ; p < 10; p++)
	{
		for (j = 'a'; j <= 'z'; j++)
        	{
	      		_putchar(j);
		}
		_putchar('\n');
	}
}
