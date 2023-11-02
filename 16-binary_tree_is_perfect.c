#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 1 if full or 0 if not or null
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (0);

}

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


/**
 * binary_tree_is_perfect - function that checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 1 if perfect or 0 if not or null
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_is_perfect(tree->left);
	right_h = binary_tree_is_perfect(tree->right);

	if (left_h == right_h)
	{
		if (binary_tree_is_full(tree))
			return (1);
	}
	return (0);
}
