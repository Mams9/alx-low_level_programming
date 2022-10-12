#include "funtion_pointers.h"

/**
 * int_index - This searches for an integer
 * @array: an array to search in
 * @size: the size of an array
 * @cmp: pointer to the comparing function
 *
 * Return: return an index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
