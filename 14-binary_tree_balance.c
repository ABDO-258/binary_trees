#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 *						of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: height or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL)
		right = 1 +  binary_tree_balance(tree->right);
	if (tree->left != NULL)
		left = 1 +  binary_tree_balance(tree->left);
	return (right - left);
}
