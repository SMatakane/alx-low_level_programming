#include "function_pointers.h"
/**
 * print_name - eh
 * @name: name
 * @f: something
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
