#include "binary_trees.h"

/**
 * binary_tree_size - The size of the binary tree
 * @tree: a binary tree
 * Return: the size of the binary tree
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);
	return (left_height + right_height + 1);
}
