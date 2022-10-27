#include <stdio.h>
#include <stdlib.h>

char * _strdup(char *str)
{
  char * retour;
 long unsigned int i =0;
  retour = malloc(sizeof(str)+1);
  
  for(i = 0; i < sizeof(str) +1 ; i++) 
{
  retour[i] = str[i];
}
retour[sizeof(str)] = '\0';

  return retour;

}






