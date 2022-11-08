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
   strcpy(dog -> name,name);
   dog -> age = age;
   strcpy(dog -> owner,owner);
   }
   else
   {
	 free(dog);
   }
   return dog;
  }

}

