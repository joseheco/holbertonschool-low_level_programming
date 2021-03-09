#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialize.
 * @d: Variable.
 * @name: Dog.
 * @age: Dog.
 * @owner: Dog.
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
 if (d != NULL)
 {
  d->name = name;
  d->age = age;
  d->owner = owner;
 }
}
