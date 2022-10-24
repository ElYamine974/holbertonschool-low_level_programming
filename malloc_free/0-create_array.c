#include "main.h"
/**
* create_array - create an array (char), initialize it with a specific char
* @size:
* @c: a variable char
* Return: a pointer to the array, or NULL if it falls
*/
char *create_array(unsigned int size, char c)
unsigned int i;
char *p;

if (size == 0)
{
return (NULL);
}
p= malloc(sizeof(char) * (size +1));
if (p == NULL)
{
return(NULL);
}
for (i = 0; i < size; i++)
{
p[i] = c;
}
p[i] = '\0';

return (p);
