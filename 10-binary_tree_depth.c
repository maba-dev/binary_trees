#include "binary_trees.h"

/**
 * binary_tree_depth - The depth of the tree
 * @tree: a binary tree
 * Return: the depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
