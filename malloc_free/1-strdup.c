#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * _strdup(char *str)
{
char * retour;
int i =0;
int len = strlen(str);
if (str == NULL)
{
return NULL;
}

retour = malloc((len+1)*sizeof(char));
if (retour == NULL)
{
	return NULL;
}	
while(i < len) 
{
  retour[i] = str[i];
  i++;
}
retour[i] = '\0';

return retour;

}






