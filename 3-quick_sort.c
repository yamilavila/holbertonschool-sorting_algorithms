#include "sort.h"

/**
 * quick_sort - is an in place sorting algorithm
 * @array: int to sort
 * @size: size of the array
 *
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_check(array, 0, size - 1, size);
}

/**
 * quick_sort_check - recursively sort the order using quicksort algorithm
 * @array: array to sort
 * @low: index of current lowest position
 * @high: pivot point, index highest position
 * @size: size of the array
 */

void quick_sort_check(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int position = quick_sort_partition(array, low, high, size);

		quick_sort_check(array, low, position - 1, size);
		quick_sort_check(array, position + 1, high, size);
	}
}

/**
 * quick_sort_partition - reorders the array so that all elements with values
 * less than the pivot come before the pivot while all elements with values high
 * than come after
 * @array: array to sort
 * @low: lowest index
 * @high: highest index
 * @size: size of the array
 */

int quick_sort_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			swap_the_array(array, i, j, size);
			i++;
		}
	}
	swap_the_array(array, i, high, size);
	return (i);
}

/**
 * swap_the_array - swaps two elements
 * @array: array to swap
 * @count1: first index count
 * @count2: second index count
 * @size: size of the array
 */

void swap_in_array(int *array, int count1, int count2, size_t size)
{
	int x;

	if (array[count1] != array[count2])
	{
		x = array[count1];
		array[count1] = array[count2];
		array[count2] = x;
		print_array(array, size);
	}
}
