#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: height of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_right = 0, count_left = 0;

	if (tree == NULL)
		return (0);

	else
	{
		while (tree->right != NULL)
		{
			count_right++;
			tree = tree->right;
		}
		while (tree->left != NULL)
		{
			count_left++;
			tree = tree->left;
		}
	}
	if (count_right > count_left)
		return (count_right);
	else
		return (count_left);
}
