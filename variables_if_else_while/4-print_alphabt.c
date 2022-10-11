#include <stdio.h>
/**
* main - Short description, single line
* Return: 0 si le pregramme est bien executé
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}

}
putchar('\n');
return (0);
}
