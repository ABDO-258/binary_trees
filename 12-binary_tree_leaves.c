#include "binary_trees.h"

/**
 * count_leaves - recursive function to traverse the tree
 *				  and increment the count for each leaf node encountered
 *
 * @node: pointer to the root node of the tree to count the number of leaves
 * @count: count of leaves in the binary tree
 *
 */
void count_leaves(const binary_tree_t *node, size_t *count)
{
	if (node == NULL)
		return;
	if (node->left == NULL && node->right == NULL)
		(*count)++;
	count_leaves(node->left, count);
	count_leaves(node->right, count);

}



/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: count of leaves in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	count_leaves(tree, &count);

	return (count);
}
