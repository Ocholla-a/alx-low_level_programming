#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defining structure of a dog
 * @name: first property which is the name of the dog
 * @owner: second property which is the name of the owner of the dog
 * @age: third property which is the age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
