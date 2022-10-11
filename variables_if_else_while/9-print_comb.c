#include <stdio.h>
/**
* main - Short description, single line
* Return: 0 si le programme est bien executé
*/

int main(void)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
{
	putchar(ch);

	if (ch != '9')
	{
	putchar(',');
	putchar(' ');
	}

}
putchar('\n');
return (0);
}
