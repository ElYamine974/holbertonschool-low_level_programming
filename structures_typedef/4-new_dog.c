#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
  if(name==NULL || owner == NULL)
  {
    return NULL;
  }
  else
  {
   char* name_copy;
   strcpy(name,name_copy);
   char* owner_copy;
   strcpy(owner,owner_copy);
   
   dog_t *dog = malloc(sizeof(dog_t));
   if(dog != NULL)
   {
   dog -> name = name_copy;
   dog -> age = age;
   dog -> owner = owner_copy;
   }
   else
   {
	 free(dog);
   }
   return dog;
  }

}

