#include "binary_trees.h"

/**
 * height_is_equal - checks whether left branch is equal to right branch
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: 1 if branches are equal, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
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
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left;
	int right;

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (tree != NULL && tree->left == NULL && tree->right == NULL)
		return (1);
	if (left == right && binary_tree_is_full(tree) == 1)
		return (1);
	else
		return (0);
}
