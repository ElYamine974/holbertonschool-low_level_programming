#include <stdio.h>
#include <stdlib.h>

char * _strudup(char *str)
{
  char * retour;
  retour = malloc(sizeof(str)+1);
  long unsigned int i;
for(i = 0; i<sizeof(str)-1;i++) 
{
  retour[i] = str[i];
}
retour[sizeof(str)] = '\0';

  return retour;

}






