#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node:  is a pointer to the node to find the sibling
 *
 * Return:  pointer to the node to find the sibling or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->left == NULL
					 || node->parent->right == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);

}

/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * @node:  is a pointer to the node to find the uncle
 *
 * Return:  pointer to the node to find the uncle or null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
