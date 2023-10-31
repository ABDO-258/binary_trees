#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree != NULL)
	{
		count += 1;
		count +=  binary_tree_size(tree->right);
		count +=  binary_tree_size(tree->left);
	}

	return (count);
}
