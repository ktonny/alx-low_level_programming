#ifndef DOG_h
#define DOG_H
/**
  *struct dog - dogs details
  *@name: daogs name
  *@age: dogs age
  *@owner: dogs owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
