#include <stdlib.h>
#include <string.h>
#include "bitree.h"


void bitree_init(BiTree *tree ,void(*destory)(void *data))
{
	tree->size = 0;
	tree->destory = destory;
	tree->root = NULL;
	return ;
}

void bitree_destory(BiTree *tree)
{
	bitree_rem_left(tree,NULL);
	memset(tree,0,sizeof(BiTree));
}

int bitree_ins_left(BiTree *tree,BiTreeNode *node,const void *data)
{
	BiTreeNode *new_node , *position;
	/*决定哪里 插入 节点*/
	if (node == NULL)
	{
		/*当树为空时，当 root 节点*/
		if (bitree_size(tree) > 0)
			return -1;
		position = &tree->root;
		
	}else
	{
		if(bitree_left(node) != NULL)
			return -1;
		position = &node->left;
	}

	if((new_node = (BiTreeNode *)malloc(sizeof(BiTreeNode))) ==NULL)
		return -1;

	new_node->data = (void *)data;
	new_node->left = NULL;
	new_node->right = NULL;
	*position = new_node;
	tree->size++;
	return 0;
}
