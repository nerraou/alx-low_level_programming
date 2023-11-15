#include "search_algos.h"

/**
 * print_array - print array
 *@array: array
 *@begin: array start
 *@end: array end
 */
void print_array(int *array, int begin, int end)
{
	printf("Searching in array: ");
	for (; begin <= end; begin++)
	{
		printf("%d", array[begin]);
		if (begin != end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - binary search
 *@array: array
 *@size: array size
 *@value: value to find
 *
 *Return: index of the value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int mid;
	int begin;
	int end;

	if (array == NULL)
		return (-1);
	begin = 0;
	end = size - 1;
	while (begin <= end)
	{
		print_array(array, begin, end);
		mid = begin + (end - begin) / 2;
		if (value == array[mid])
		{
			return (mid);
		}

		if (value > array[mid])
			begin = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
