#ifndef dog_h
#define dog_h
/**
 * struct dog - This struct is about the details of a dog.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's details
 *
 * Description: No long description needed
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
