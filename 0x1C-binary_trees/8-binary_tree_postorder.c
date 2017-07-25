#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through tree using post-order traversal
 * @tree: tree to go through
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	printf("%d\n", tree->n);
}
