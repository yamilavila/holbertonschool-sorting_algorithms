#include "sort.h"

/**
 * quick_sort - is an in place sorting algorithm
 * @array: int to sort
 * @size: size of the array
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
 * @lo: index of current lowest position
 * @hi: pivot point, index highest position
 * @size: size of the array
 */

void quick_sort_check(int *array, int lo, int hi, size_t size)
{
	if (lo < hi)
	{
		int position = quick_sort_partition(array, lo, hi, size);

		quick_sort_check(array, lo, position - 1, size);
		quick_sort_check(array, position + 1, hi, size);
	}
}

/**
 * quick_sort_partition- reorders the array so that all elements with values
 * @array: array to sort
 * @lo: lowest index
 * @hi: highest index
 * @size: size of the array
 */

int quick_sort_partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int i = lo, j;

	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			swap_the_array(array, i, j, size);
			i++;
		}
	}
	swap_the_array(array, i, hi, size);
	return (i);
}

/**
 * swap_the_array- swaps two elements
 * @array: array to swap
 * @x: pivot
 * @index1: first index count
 * @index2: second index count
 * @size: size of the array
 */

void swap_the_array(int *array, int index1, int index2, size_t size)
{
	int x;

	if (array[index1] != array[index2])
	{
		x = array[index1];
		array[index1] = array[index2];
		array[index2] = x;
		print_array(array, size);
	}
}
