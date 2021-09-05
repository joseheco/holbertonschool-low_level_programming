#include "search_algos.h"
int binary_search_helper(int *array, int l, int h, int value);
/**
 * binary_search - searches for a value in a sorted array
 * @array: a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: return the first index
 */
int binary_search(int *array, size_t size, int value)
{
	if (array && (int)size > 0)
		return (binary_search_helper(array, 0, size - 1, value));
	return (-1);
}
/**
 * binary_search_helper - helper function for searches for a value
 * @array: is a pointer to the first element of the array to search
 * @l: low - the first index of sub-array
 * @h: height - the last index of sub-array
 * @value: is the value to search
 * Return: return the first index where value is located
 */
int binary_search_helper(int *array, int l, int h, int value)
{
	int i, mid;

	printf("Searching in array: ");
	for (i = l; i < h; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	if ((l + h + 1) % 2 == 0)
		mid = (l + h + 1) / 2 - 1;
	else
		mid = (l + h + 1) / 2;

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value && l != h)
		return (binary_search_helper(array, l, mid - 1, value));
	else if (array[mid] < value && l != h)
		return (binary_search_helper(array, mid + 1, h, value));
	return (-1);
}
