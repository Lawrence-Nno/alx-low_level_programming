#ifndef _FUNCTION_POINTERS.H_
#define _FUNCTION_POINTERS.H_

#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif /* _FUNCTION_POINTERS.H_ */