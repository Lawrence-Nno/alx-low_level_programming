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

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
