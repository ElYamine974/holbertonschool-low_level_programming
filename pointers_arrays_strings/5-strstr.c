#include <stdlib.h>
#include "main.h"
/**
 * _strstr - _strstr
 * @haystack: pointer to the haystack string
 * @needle: pointer to the needle string
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0;
unsigned int j;
while (*(haystack + i) != '\0')
{
j = 0;
while (*(needle + j) != '\0' && *(haystack + i + j) != '\0')
{
if (*(needle + j) != *(haystack + i + j))
{
break;
}
j++;
}
if (*(needle + j) == '\0')
{
return (haystack + i);
}
i++;
}
return (NULL);
}

