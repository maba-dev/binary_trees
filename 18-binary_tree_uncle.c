#include "binary_trees.h"
/**
 * @brief 
 * 
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *sibling;
    if (!node || !node->parent)
        return NULL;
    if (node == node->parent->left)
        sibling = node->parent->right;
    else
        sibling = node->parent->left;
    return sibling;
}


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL)
        return NULL;
    return (binary_tree_sibling(node->parent));
}
