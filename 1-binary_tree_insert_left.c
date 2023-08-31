#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 * Return: Pointer to the already created node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (parent == NULL || value == '\0')
		return (NULL);

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}

	parent->left = newNode;

	return (newNode);
}
