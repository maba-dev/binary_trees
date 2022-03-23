#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: a binary tree tree
 * @func: root of the tree
 * Return: None
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, (*func));
	if (tree->right)
		binary_tree_preorder(tree->right, (*func));
}
