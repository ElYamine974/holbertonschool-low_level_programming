#include <stdio.h>
#include <stdlib.h>

char * _strdup(char *str)
{
char * retour;
long unsigned int i =0;
retour = malloc(sizeof(str)+1);
if (retour == NULL)
{
	return NULL;
}	
for(i = 0; i < sizeof(str) +1 ; i++) 
{
  retour[i] = str[i];
}
retour[sizeof(str)] = '\0';

free(retour);
return retour;

}






