#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - cuenta la altura del arbol
 * @tree: puntero al padre
 *
 * Return: fallo 0 o altura del arbol
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (l > r)
	{
		return (l + 1);
	}
	else
	{
		return (r + 1);
	}
}
