#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_strdup(char *str)
/*
 *  Returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 */
{
char *retour;
int i = 0;
int len;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
retour = malloc((len + 1) * sizeof(char));
if (retour == NULL)
{
return (NULL);
}	
while(i < len) 
{
retour[i] = str[i];
i++;
}
retour[i] = '\0';

return(retour);

}






