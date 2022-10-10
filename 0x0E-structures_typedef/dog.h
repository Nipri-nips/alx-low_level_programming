#ifndef DOG_H
#define DOG_H

/**
 *struct dog my_dog;
 *my_dog.name
 *my_dog.age
 *my_dog.owner
 *file: dog.h
 *Desc: Header file containing all the prototypes for all functions
 */
typeof struct dog
{
name, type = char *
age, type = float
owner, type = char *
}
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
