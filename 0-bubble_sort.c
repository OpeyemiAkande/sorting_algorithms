#include "sort.h"

/**
 * bubble_sort - a function to sort an array of integers using the
 * bubble sort algorithm
 *
 * Author: Opeyemi Akande
 * @array: the array of integers to be sorted
 * @size: the size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, sorted;
	int temp;

	for (i = 0; i < (size - 1); i++)
	{
		sorted = 0;
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
				sorted = 1;
			}
		}

		if (sorted == 0)
			break;
	}
}
