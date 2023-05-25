#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct action - Struct action
 *
 * @specifier: conversion specifier
 * @f: The function associated
 */
typedef struct action
{
	char specifier;
	void (*f)(va_list args);
} action_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char *const format, ...);

#endif
