#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Define a new type struct dog with the following elements:
 * name, type = char *
 * age, type = float
 * owner, type = char *
 */
/* Define a new type dog_t as a new name for the type struct dog */
typedef struct dog {
char *name;   /* Member: name, type = char * */
float age;    /* Member: age, type = float */
char *owner;  /* Member: owner, type = char * */
} dog_t;

/* Function prototypes */

/* Task 0: Poppy */
/* No additional function prototype needed */

/* Task 1: A dog is the only thing on earth that loves you more than you love yourself */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad */
void print_dog(struct dog *d);

/* Task 4: A door is what a dog is perpetually on the wrong side of */
dog_t *new_dog(char *name, float age, char *owner);
char *_strcopy(char *dest, char *src);
int _strlen(char *str);
/* Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg */
void free_dog(dog_t *d);

#endif /* DOG_H */
