#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - imprime el contenido de los nodos in-orden
 * @tree: puntero al padre
 * @func: funcion que imprime numeros
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
