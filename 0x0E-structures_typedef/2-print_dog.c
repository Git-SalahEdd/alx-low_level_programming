#include <dog.h>
#include <stdio.h>

/**
*print_dog - prints a struct dog
*@d : struct dog
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("age: %s\n", d->age ? d->age : "(nil)");
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
