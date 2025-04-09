#include "binary_trees.h"

/**
 * binary_tree_depth - Mide la profundidad de un nodo en un arbbol binario
 * @tree: puntero al nodo para medir la profundidad
 *
 * Return: Profundidad del nodo, o 0 si tree es NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	
	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
