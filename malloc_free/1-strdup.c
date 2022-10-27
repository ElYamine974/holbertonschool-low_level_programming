#include <stdio.h>
#include <stdlib.h>

char * _strdup(char *str)
{
  char * retour;
  retour = malloc(sizeof(str)+1);
  int i =0;
  char* p = str;
while(p != '\0') 
{
  retour[i] = str[i];
  i++;
  p++;
}
retour[sizeof(str)] = '\0';

  return retour;

}






