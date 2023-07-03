#include "main.h"

/**
*set_string - sets the value of a pointer to a cha
*@s: pointer
*@to: pointer
* Return: northing
*/

void set_string(char **s, char *to)
{
	char *b = to;
	char **a = s;
	*a = b;
}
