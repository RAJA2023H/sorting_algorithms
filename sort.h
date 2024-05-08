#ifndef sort_H
#define sort_H

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


#include <stdlib.h>
#include <stdio.h>

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void _Qsort(int *a, int low, int high, int size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void _shsort(int *a, int size, int n);
listint_t *create_listint(const int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void decrease_sort(listint_t **ptr, listint_t **limit, listint_t **list);
void increase_sort(listint_t **ptr, listint_t **limit, listint_t **list);
void swap_list(listint_t **ptr1, listint_t **ptr2, int n);
#endif
