#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Typedef for struct.
 * @name: name.
 * @age: age.
 * @owner: the dog owner's name.
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *d);
#endif

