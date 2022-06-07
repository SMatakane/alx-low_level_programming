#include "main.h"

/**
 * _abs - find absolute value
 * @val: value
 * Return: absolute
 */
int _abs(int val)
{
	if (val <= 0)
		return (val * (-1));
	else
		return (val);
}
