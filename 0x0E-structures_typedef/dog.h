#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type dog
 * @name: Dog's name
 * @age: Age of the Dog
 * @owner: The name of the Owner of the Dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* funtions declarations */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dof_t *d);
int _putchar(char c);
#endif /* !DOG_H */
