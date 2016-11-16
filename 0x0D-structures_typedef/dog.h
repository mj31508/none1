#ifndef DOGGY
#define DOGGY
/**
* struct dog - define a new type of struct dog
*
* @owner: floater
* @name: pointer for owner
* @age: Structure
*
* Return: Always zero
**/

struct dog
{

	char *name;
	float age;
	char *owner;
};


#endif /* DOG*/

/*Adding prototypes
void init_dog(struct dog *d, char *name, float age, char *owner);
