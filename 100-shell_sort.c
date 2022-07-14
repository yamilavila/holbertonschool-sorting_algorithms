#include "sort.h"

/**
 * shell_sort - sort array of int in ascending order
 * @array: array of int to sort
 * @size: size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t space = 1, i, j;
	int xtra;

	while (space < size)
		space = space * 3 + 1;
	space /= 3;

	while (space)
	{
		for (i = space; i < size; i++)
		{
			xtra = array[i];
			for (j = i; j >= space && array[j - space] > xtra; j -= space)
			{
				array[j] = array[j - space];
			}
			array[j] = xtra;
		}
		space /= 3;
		print_array(array, size);
	}
}
