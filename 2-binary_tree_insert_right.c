#include "binary_trees.h"
/**
 * *binary_tree_insert_right -  inserts a node as the right-child
 * @parent: the parent node
 * @value: the value of the node
 * Return: left-child node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = malloc(sizeof(*right_child));

	if (right_child == NULL)
		return (NULL);
	right_child->n = value;
	right_child->parent = parent;

	if (parent->left != NULL)
	{
		right_child->left = parent->left;
		right_child->left->parent = right_child;
	}
	else
		right_child->left = NULL;

	parent->left = right_child;
	right_child->left = NULL;
	return (right_child);
}
