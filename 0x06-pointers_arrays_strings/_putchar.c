#include "main.h"
#include <unistd.h>

/**
 * _putchar - will write the char c to the stdout
 * @c the character to print
 * Return: on screen 1
 * On error -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c,1));
}
