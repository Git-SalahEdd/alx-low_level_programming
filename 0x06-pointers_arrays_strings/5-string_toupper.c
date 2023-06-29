#include "main.h"

/**
**string_toupper - changes all lowercase letters of a string to uppercase
*@s: string to be changed from lowcase to uppercase
*Return: final result
*/

char *string_toupper(char *s)
{
int count = 0, i;

while (s[count] != '\0')
{
count++;
}
i = count;
while (i >= 0)
{
if (s[i] >= 97 && s[i] <= 122)
{
	s[i] = s[i] - 32;
}
i--;
}
return (s);

}
