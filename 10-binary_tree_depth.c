#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: The depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter;

	if (tree == NULL)
	{
		return (0);
	}
	counter = 0;
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		counter = counter + 1;
	}
	return (counter);
}
