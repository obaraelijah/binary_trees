#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates a node to the left.
 * @tree: A pointer to the node to rotate.
 *
 * Return: The new root node.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree) {
    if (tree == NULL || tree->right == NULL) {
        return (tree);
    }

    binary_tree_t *new_root = tree->right;
    tree->right = new_root->left;
    new_root->left = tree;

    return (new_root);
}
