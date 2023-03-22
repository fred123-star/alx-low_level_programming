#include "main.h"
/**
 * _abs - computes the absolute value
 * of an integer
 *
 * @i: inputs number as an integer
 *
 * Return: return the absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
