#ifndef _SORT_H_
#define _SORT_H_
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Task 0. Bubble sort */
void bubble_sort(int *array, size_t size);

/* Task 1. Insertion sort */
void insertion_sort_list(listint_t **list);

/* Task 2. Selection sort */
void selection_sort(int *array, size_t size);

/* Task 3. Quick sort */
void quick_sort(int *array, size_t size);
void quick_sort_check(int *array, int lo, int hi, size_t size);
int quick_sort_partition(int *array, int lo, int hi, size_t size);
void swap_the_array(int *array, int index1, int index2, size_t size);

#endif
