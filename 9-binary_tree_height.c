#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL)
		right = 1 +  binary_tree_height(tree->right);
	if (tree->left != NULL)
		left = 1 +  binary_tree_height(tree->left);

	if (left > right)
		return (left);
	else
		return (right);
}
