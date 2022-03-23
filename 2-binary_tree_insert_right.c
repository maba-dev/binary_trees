#include "binary_trees.h"
/**
 * *binary_tree_insert_right -  inserts a node as the right-child
 * @parent: the parent node
 * @value: the value of the node
 * Return: left-child node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child = binary_tree_node(parent, value);

	if (parent == NULL || right_child == NULL || value == '\0')
		return (NULL);
	right_child->right = parent->right;

	if (right_child->right != NULL)
		right_child->right->parent = right_child;
	parent->right = right_child;
	return (right_child);
}
