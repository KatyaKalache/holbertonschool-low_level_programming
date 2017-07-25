#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	printf("new_node value: %d\n", new_node->n);
	printf("parent value: %d\n", parent->n);
	if (parent->left != NULL)
		printf("parent's left value: %d\n", parent->left->n);
	printf("-----------------\n");


	if (parent != NULL)
	{
		if (new_node->n < parent->n)
		{
			new_node->parent = parent;
			parent->left = new_node;
		}
		else if (new_node->n > parent->n)
		{
			parent->parent = new_node;
			new_node->parent = parent->parent;
			new_node->left = parent;
		}
	}
	else
		parent = new_node;
		
	if (parent->left != NULL)
	{
		if (new_node->n < parent->left->n)
		{
			parent->left = new_node;
			new_node->parent = parent->parent;
		}
		else if (new_node->n > parent->left->n)
		{
			printf("Im in here!\n");
			parent->left->parent = new_node;
			new_node->parent = parent->left->parent;
			new_node->left = parent->left;
		}
	}
	else
		parent = new_node;
	return (new_node);
}
