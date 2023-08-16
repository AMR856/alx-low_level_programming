#ifndef _FUNCTIONS_POINTERS_H_
#define _FUNCTIONS_POINTERS_H_

#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
