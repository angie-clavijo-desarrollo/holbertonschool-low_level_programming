#include <stdio.h>
#include "dog.h"
/**
 *print_dog - name function
 *@d: pointer a struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d != NULL)
	{
		/*printf("Name: ");*/
		d->name == NULL ? printf("(nil)\n") : printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		/*printf("Owner: ");*/
		d->owner == NULL ? printf("(nil)\n") : printf("Owner: %s\n", d->owner);
	}
}
