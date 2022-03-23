#include "binary_trees.h"
/**
 * @brief 
 * 
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
        return 0;
    size_t number_nodes_left = binary_tree_nodes(tree->left);
    size_t number_nodes_right = binary_tree_nodes(tree->right);
    return number_nodes_left + number_nodes_right + 1;

}
