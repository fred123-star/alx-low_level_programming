#include "main.h"
/**
 * _puts - prints a string, followed by a new line to a string
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
