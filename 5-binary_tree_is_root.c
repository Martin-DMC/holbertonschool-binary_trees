#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - verifica si x nodo es el root
 * @node: puntero al nodo que verificaremos
 *
 * Return: 1 es el root, 0 no lo es
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
