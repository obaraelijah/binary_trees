#include "binary_trees.h"
#include "queue.h"

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: This function traverses a binary tree using level-order
 * traversal and calls a function for each visited node. The function
 * receives the value of the node as a parameter.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_t *queue = NULL;

	if (tree == NULL || func == NULL)
		return;

	queue_push(&queue, (void *)tree);

	while (!queue_empty(queue))
	{
		binary_tree_t *node = (binary_tree_t *)queue_peek(queue);
		queue_pop(&queue);

		func(node->n);

		if (node->left != NULL)
			queue_push(&queue, (void *)(node->left));
		if (node->right != NULL)
			queue_push(&queue, (void *)(node->right));
	}

	queue_delete(&queue, NULL);
}

