#include "main.h"

/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: parameter
*Return: conversion result
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int ezq = 0;

	if (!*b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		ezq = (ezq * 2) + (*b - '0');
		b++;
	}
	return (ezq);
}
