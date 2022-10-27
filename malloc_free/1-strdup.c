#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * _strdup(char *str)
{
char * retour;
size_t i =0;
if (str == NULL)
{
return NULL;
}

retour = malloc(sizeof(str)+1);
if (retour == NULL)
{
	return NULL;
}	
for(i = 0; i < strlen(str) ; i++) 
{
  retour[i] = str[i];
}
retour[strlen(str)+1] = '\0';

return retour;

}






