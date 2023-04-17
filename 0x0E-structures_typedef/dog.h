#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog stracth
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the owner's name
 *
 * Description: only one dog structure among a vast world of cats
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
