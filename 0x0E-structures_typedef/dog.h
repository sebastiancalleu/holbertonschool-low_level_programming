#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Typedef for struct.
 * @name: name.
 * @age: age.
 * @owner: the dog owner's name.
 **/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
#endif

