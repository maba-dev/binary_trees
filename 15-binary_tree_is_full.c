#include "binary_trees.h"
/**
 * binary_tree_is_full -  a function that checks if a binary tree is full
 * @tree: a binary tree
 * Return: true if the binary tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
