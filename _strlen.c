#include "main.h"

/**
 * _strlen - function
 * @l: char
 * Return: number
*/

int _strlen(char *l)
{
	int i = 0;

	while (l[i])
		i++;
	return (i);
}


