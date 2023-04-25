#include "sort.h"


/**
*selection_sort - a function that sorts an array of integers
*in ascending order using the Selection sort algorithm
*@array: an array of integers
*@size: array size
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < (size - 1); i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
		{
			j = array[i];
			array[i] = array[min_idx];
			array[min_idx] = j;
			print_array(array, size);
		}
	}
}
