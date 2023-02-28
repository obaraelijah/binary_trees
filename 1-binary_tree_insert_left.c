#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 *
 * @parent: is a pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 *
 * Description - If parent already has a left-child, the new node must
 *				take its place, and the old left-child must be set as
 *				the left-child of the new node.
 *
 * Return: a pointer to the created node, or NULL on failure or if
 *			parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = binary_tree_node(parent, value);
	binary_tree_t *OldNode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (NewNode == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = NewNode;
	}
	else
	{
		OldNode = parent->left;
		parent->left = NewNode;
		NewNode->left = OldNode;
		OldNode->parent = NewNode;
	}
	return (NewNode);
}
