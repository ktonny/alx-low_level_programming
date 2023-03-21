#ifndef DOG_H
#define DOG_H
/**
  *struct dog - dogs details
  *@name: daogs name
  *@age: dogs age
  *@owner: dogs owner
  *Description: longer description
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
