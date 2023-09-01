#include "binary_trees.h"

/**
 * binary_tree_postorder - check the code
 * @tree: const pointer to root node to begin traversal at
 * @func: function to call on tree node's data
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
