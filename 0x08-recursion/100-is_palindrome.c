#include "main.h"


/**
*stringLength - calc lenth of the string s
*@s: parameter string S
*Return: lenth of a string
*/

int stringLength(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + stringLength(s + 1));
	}
}

/**
*check_is_palindrome - check string is palindrome return 1 or not return 0
*@s: parameter string
*@start: last character of the string
*@end: last character of the string
*Return: final result 1 or 0
*/

int check_is_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	return (check_is_palindrome(s, start + 1, end - 1));
}

/**
*is_palindrome - calcul len of the string and start check
*@s: parameter string
*Return:final result
*/

int is_palindrome(char *s)
{
	int len = stringLength(s);

	return (check_is_palindrome(s, 0, len - 1));
}
