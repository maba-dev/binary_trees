#include "binary_trees.h"
/**
 * *binary_tree_sibling - a function that finds the sibling of a node
 * @node: The binary tree node
 * Return: The binary tree sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		sibling = node->parent->right;
	else
		sibling = node->parent->left;
	return (sibling);
}
