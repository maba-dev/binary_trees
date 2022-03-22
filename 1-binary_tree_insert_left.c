#include "binary_trees.h"
/**
 * @brief 
 * 
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *left_child = binary_tree_node(parent, value);
    if (parent == NULL || left_child == NULL)
        return NULL;
    left_child->left = parent->left;

    if (left_child->left != NULL)
        left_child->left->parent = left_child;
    parent->left = left_child;
    return left_child;
}
