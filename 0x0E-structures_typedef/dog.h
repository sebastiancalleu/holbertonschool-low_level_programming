#ifndef DOG_H
#define DOG_H
/**
 * dog - Typedef for struct.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
#endif

