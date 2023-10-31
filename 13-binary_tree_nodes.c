#include "binary_trees.h"

/**
 * count_nodes - recursive function to traverse the tree
 *				  and increment the count for each leaf node encountered
 *
 * @node: pointer to the root node of the tree to count the number of nodes
 * @count: count of nodes with at least 1 child in a binary tree
 *
 */
void count_nodes(const binary_tree_t *node, size_t *count)
{
	if (node == NULL)
		return;
	if (node->left != NULL || node->right != NULL)
		(*count)++;
	count_nodes(node->left, count);
	count_nodes(node->right, count);

}



/**
 * binary_tree_nodes - function that counts  the nodes
 *					   with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: count of leaves in the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	count_nodes(tree, &count);

	return (count);
}
