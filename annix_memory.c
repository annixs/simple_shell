#include "shell.h"

/**
 * bfree -This frees a pointer and NULLs the address
 * @ptr: address of the pointer to free in a code
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
