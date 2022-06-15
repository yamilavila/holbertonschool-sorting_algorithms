#include "sort.h"

/**
 * selection_sort - is an in-place comparison sorting algorithm
 * @array: sorted index
 * @size: size of array
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int tmp;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
