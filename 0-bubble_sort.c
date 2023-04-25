#include "sort.h"

/**
* bubble_sort - a function that sorts an array of integers
*in ascending order using the Bubble sort algorithm
*@array: data structure to sort
*@size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, len = size;
	size_t swapped = 1;

	if (size < 2 || !array)
		return;

	while (swapped)
	{
		i = 0;
		swapped = 0;

		while (i < (size - 1))
		{
			if (array[i] > array[i + 1])
			{
				j = array[i + 1];
				array[i + 1] = array[i];
				array[i] = j;
				print_array(array, len);
				swapped = 1;
			}
			i++;
		}
		size -= 1;
	}
}
