#include "binary_trees.h"

/**
 * array_to_heap -this function will make binary tree.
 *
 * @array: 1st ele ptr.
 *
 * @size: arr ele num.
 *
 * Return: null or root num.
 *
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
