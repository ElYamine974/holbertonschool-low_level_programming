#include <stdio.h>
#include "dog.h"
void print_dog(struct dog *d)
{
 if (d!= NULL)
 {
  if(d->name != null)
  {
	  printf("Name: %s\n",d->name);
  }
  else
  {
	  printf("Name: (nil)\n");
  }
  if(d->age!NULL)
  {
  printf("Age: %f\n",d->age);
  }
  else
  {
  printf("Age: (nil)\n");
  }
  if(d->owner != null)
  {
  printf("Owner: %s\n",d->owner);
  }
  else
  {
  printf("Owner: (nil)\n");
  }

 }
}
