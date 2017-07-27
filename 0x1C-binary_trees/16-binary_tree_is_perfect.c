#include "binary_trees.h"

/**
 * _pow_recursion - Function that returns
 * the favlue of x raised to the power of y
 * @x: number arguement
 * @y: power arguement
 * Return: value of x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size of
 * Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - checks whether left branch is equal to right branch
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: 1 if branches are equal, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
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
	int size;
	int pow_result;
	short int verify = 0;

	if (tree == NULL)
		return (0);

	size = (int)(binary_tree_size(tree));

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	pow_result = (_pow_recursion(2, left + 1) - 1);

	if (pow_result == size)
		verify = 1;

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (left == right && binary_tree_is_full(tree) == 1 && verify == 1)
		return (1);
	else
		return (0);
}
