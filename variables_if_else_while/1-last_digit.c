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
int lastD;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastD = n % 10;
printf("Last digit of %d is %d ", n, lastD);
if (lastD > 5)
{
printf("and is greater than 5\n");
}
else if (lastD == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
