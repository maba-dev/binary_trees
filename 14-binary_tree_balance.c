#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: a binary tree
 * Return: the height of a binary tree
 */

int tree_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: binary tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return (left_height - right_height);
}
