#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_postorder - imprime el contenido de los nodos postorden
 * @tree: puntero al padre
 * @func: funcion que imprime numeros
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
