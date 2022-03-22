#include "binary_trees.h"

/**
 * @brief 
 * 
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL)
        return;
    if (tree->parent != NULL)
        printf("%d\n", tree->n);
    else
        printf("%d\n", tree->n);
    if (tree->left != NULL)
        binary_tree_preorder(tree->left, (*func));
    if (tree->right != NULL)
        binary_tree_preorder(tree->right, (*func));
 
    }