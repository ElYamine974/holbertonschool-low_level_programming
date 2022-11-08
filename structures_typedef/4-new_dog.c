#include <stdio.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
  if(name==NULL || owner == NULL)
  {
    return NULL;
  }
  else
  {
   dog_t *dog;
   dog -> name = name;
   dog -> age = age;
   dog -> owner = owner;
   return dog;
  }

}

