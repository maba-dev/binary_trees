#include "binary_trees.h"
/**
 * @brief 
 * 
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *racine = malloc(sizeof(*racine));
    if (racine == NULL || parent == NULL)
        return NULL;
    racine->n = value;
    racine->parent = parent;
    racine->left = NULL;
    racine->right = NULL;
    return racine;
}
