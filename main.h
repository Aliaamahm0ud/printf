#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
* struct print - struct entry point
* @type: char
* @func: function
*/

typedef struct print
{
	char *type;
	int (*func)(va_list);
} print_t;

int _printf(const char *format, ...);

int _putchar(char c);
int _strlen(char *l);
int _puts(char *str);
int print_c(va_list c);
int print_s(va_list s);
int print_per(va_list p);
int print_di(va_list di);

#endif
