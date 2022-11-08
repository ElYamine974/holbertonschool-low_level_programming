#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include<string.h>
dog_t *new_dog(char *name, float age, char *owner)
{
  if(name==NULL || owner == NULL)
  {
    return NULL;
  }
  else
  {
   
   dog_t *dog;
   dog = malloc(sizeof(dog_t));
   if(dog != NULL)
   {
   strcpy(name,dog -> name);
   dog -> age = age;
   strcpy(owner,dog -> owner);
   }
   else
   {
	 free(dog);
   }
   return dog;
  }

}

