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
   char* name_c;
   dog_t *dog;
   name_c = malloc(strlen(name) * sizeof(char));
   if(name_c == NULL)
   {return NULL;
   }
   strcpy(name_c, name);
   dog = malloc(sizeof(dog_t));
   if(dog != NULL)
   {
   dog->name = name_c;
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

