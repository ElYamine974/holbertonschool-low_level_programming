#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Short description, single line
* Return: 0 si le pregramme est bien executé
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("0 is zero\n");
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

