#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - verificador de nodos hoja
 * @node: puntero del nodo a verificar
 *
 * Return: 1 es hoja, 0 no lo es
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
