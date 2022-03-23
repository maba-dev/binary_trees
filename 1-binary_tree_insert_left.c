#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 *
 * @parent: the parent node
 * @value: the value of the node
 * Return: left-child node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL )
		return (NULL);
	left_child = malloc(sizeof(*left_child));
	if (left_child == NULL)
			return (NULL);
	left_child->n = value;
	left_child->parent = parent;

	if (parent->left != NULL)
	{
		left_child->left = parent->left;
		left_child->left->parent = left_child;
	}
	else
		left_child->left = NULL;
	parent->left = left_child;
	left_child->right = NULL;
	return (left_child);
}
