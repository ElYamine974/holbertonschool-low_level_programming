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
   dog_t *dog = malloc(sizeof(dog_t));
   if(dog != NULL)
   {
   dog -> name = name;
   dog -> age = age;
   dog -> owner = owner;
   }
   return dog;
  }

}

