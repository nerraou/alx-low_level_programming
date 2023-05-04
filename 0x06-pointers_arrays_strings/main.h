#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>

int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
#endif /* MAIN_H */
