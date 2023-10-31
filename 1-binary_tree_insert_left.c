#include "binary_trees.h"

/**
 * binary_tree_insert_left - ffunction that inserts a node as the
 *                      left-child of another node
 *
 * @parent:pointer to the new node
 * @value:data of the new node
 *
 * Return:a pointer to the created node, or NULL on failure or parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
		return (NULL);

	new_left = binary_tree_node(parent, value);
	if (new_left == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		parent->left->parent = new_left;
	}
	parent->left = new_left;
	return (new_left);
}
