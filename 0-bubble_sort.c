#include "sort.h"
/**
 * bubble_sort - function name
 * @array: pointer to array of integers
 * @size: number of element in array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp = 0;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0;  j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
