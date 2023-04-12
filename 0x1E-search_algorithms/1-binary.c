#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        size_t i;
        size_t mid = (left + right) / 2;

        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        if (array[mid] < value)
            left = mid + 1;
        else if (array[mid] > value)
            right = mid - 1;
        else
            return (mid);
    }

    return (-1);
}
