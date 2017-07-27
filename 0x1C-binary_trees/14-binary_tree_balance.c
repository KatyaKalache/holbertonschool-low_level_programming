#include "binary_trees.h"

/**
 * branch_height - measures the height of a binary branch
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: height of the binary tree or 0 if tree is NULL
 */
size_t branch_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = branch_height(tree->left);
	right = branch_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor of
 * Return: the balance factor, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = (int)(branch_height(tree->left));
	right = (int)(branch_height(tree->right));
	return (left - right);
}
