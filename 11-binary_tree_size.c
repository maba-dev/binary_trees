#include "binary_trees.h"

/**
 * @brief 
 * 
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    size_t left_height = binary_tree_size(tree->left);
    size_t right_height = binary_tree_size(tree->right);
    return (left_height + right_height + 1);
}