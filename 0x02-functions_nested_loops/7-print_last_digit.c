#include "main.h"
/**
 * print the last digit - prints the last digit
 * of anumber
 *
 * @n: input number as an integer
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int l;
	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{

		_putchar(l + 48);
		return (l);
	}
}



