#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary
 * tree using pre-order traversal
 * @tree: the binary tree
 * @func:  pointer to a function to call for each node
 *
 * Return: Nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if either argument is NULL, in which case we can't traverse the tree */
    if (tree == NULL || func == NULL)
    {
        return;
    }

    /* Call the function on the value of the current node */
    func(tree->n);

    /* Recursively traverse the left subtree in pre-order traversal */
    binary_tree_preorder(tree->left, func);

    /* Recursively traverse the right subtree in pre-order traversal */
    binary_tree_preorder(tree->right, func);
}
