#include "binary_trees.h"

/**
 * binary_tree_leaves - Cuenta las hojas de un arbol binario
 * @tree: puntero al nodo raiz del arbol
 *
 * Return: Numero de hojas en el arbol, o 0 si tree es NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
