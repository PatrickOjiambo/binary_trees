#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value:  value to put in the new node
 *
 * Return: Pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return NULL;
	}

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	if(parent != NULL)
	{
		newNode->parent = parent;
	}
	else
	{
		newNode->parent = NULL;
	}
	return newNode;
	
}