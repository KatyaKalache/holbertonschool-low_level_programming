#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to the root node of the tree to count the nodes in
 * Return: 1 is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
}
