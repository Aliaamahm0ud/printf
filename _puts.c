#include "main.h"

/**
 *_puts - function
 *@str:  char
 *Return: int
*/

int _puts(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}

