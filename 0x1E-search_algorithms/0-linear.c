#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * @array:  array to search the value
 * @size: size of the array
 * @value: value to look to
 * Return: return -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (array && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
