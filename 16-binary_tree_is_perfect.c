#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: a value that corresponds to the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_size += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_size += 1 + binary_tree_height(tree->right);

	if (left_size > right_size)
		return (left_size);
	else
		return (right_size);
}
/**
 * binary_tree_balance - measures the balance factor
 * of a binary tree
 * @tree: a pointer to the root node of the tree to measure
 * the balance factor
 * Return: 1 or 0. Whether balanced or not.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (!tree)
		return (0);

	if (tree->left)
		left_size += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_size += 1 + binary_tree_height(tree->right);
	return (left_size - right_size);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 or 0 whether tree is perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_balance(tree) == 0 &&
	binary_tree_is_full(tree) == 1)
	{
		return (1);
	}
	return (0);
}
