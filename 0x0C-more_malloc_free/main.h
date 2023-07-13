#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _strL(char *st);
char *_strncat(char *dest, char *src, int n);

#endif
