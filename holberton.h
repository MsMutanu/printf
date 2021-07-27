#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

/**
  *struct directives - holds fromat specifiers and their functions.
  *@spec: char.
  *@fspec: function pointer.
  *
  */
typedef struct directives
{
	char spec;
	int (*fspec)(va_list, int);
} forms;

int _putchar(char c);
int _printf(const char *format, ...);


#endif
