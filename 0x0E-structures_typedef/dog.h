#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog struct
 *
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description: a dog struct
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif