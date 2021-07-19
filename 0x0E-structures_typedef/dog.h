#ifndef DOG_H
#define DOG_H

/**
 * struct dog - varibles for dog
 * @name: name of dog
 * @age: dog's age
 * @owner: owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
