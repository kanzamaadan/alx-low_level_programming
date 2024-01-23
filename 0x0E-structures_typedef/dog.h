#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Define new type struct dog with the following elements:
 * name, type = char *
 * age, type = float
 * owner, type = char *
 */
typedef struct dog
{
char *name;   /* Member: name, type = char * */
float age;    /* Member: age, type = float */
char *owner;  /* Member: owner, type = char * */
} dog_t;

/* Function prototypes */

/* Task 0: Poppy */
/* No additional function prototype needed */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* Task 4: A door is what a dog is perpetually on the wrong side of */
dog_t *new_dog(char *name, float age, char *owner);
char *_strcopy(char *dest, char *src);
int _strlen(char *str);
void free_dog(dog_t *d);

#endif /* DOG_H */
