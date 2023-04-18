README.md

This project is about 0x0E. C - Structures, typedef.

The project have 6 tasks : The first task is about creating a "dog.h file"
Other task include:

# 1. A dog is the only thing on earth that loves you more than you love yourself
## Write a function that initialize a variable of type struct dog
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);


# 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
## Write a function that prints a struct dog
1. Prototype: void print_dog(struct dog *d);
2. Format: see example bellow
3. You are allowed to use the standard library
4. If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
5. If d is NULL print nothing.


# 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Define a new type dog_t as a new name for the type struct dog

# 4. A door is what a dog is perpetually on the wrong side of
##Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
1. You have to store a copy of name and owner
2. Return NULL if the function fails

# 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
## Write a function that frees dogs.

Prototype: void free_dog(dog_t *d);
