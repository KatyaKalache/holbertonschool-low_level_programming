#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: tree to check
 * Return: 1 if full, 0 if otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left;
	int right;

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if ((left == right) && (binary_tree_is_full(tree) == 1))
		return (1);
	else
		return (0);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: height of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int count_right = 0;
	int count_left = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
                return (0);
	while (tree->left != NULL)
	{
		count_left++;
		tree = tree->left;
	}
	while (tree->right != NULL)
	{
		count_right++;
		tree = tree->right;
	}
	return (count_right + count_left);
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
}
