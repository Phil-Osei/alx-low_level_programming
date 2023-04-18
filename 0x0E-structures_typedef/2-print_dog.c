#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog - Prints a struct dog
 *
 *@d: the struct dog to print
 *
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";

	printf("Name of dog is: %s\n", d->name);
	printf("Age is: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
