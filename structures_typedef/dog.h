#include <stdio.h>
struct dog 
{
	char* name;
	float age;
	char* owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct 
{
	char* name;
	float age;
	char* owner;

}dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
