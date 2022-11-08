#include <stdio.h>
#include "dog.h"
void print_dog(struct dog *d)
{
 if (d!= NULL)
 {
  printf("Name: %s",d->name);
  printf("Age: %d",d->age);
  printf("Owner: %s",d->owner);
  
 }

}
