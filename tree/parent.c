//树的双亲表示法结点 结构定义

#define MAX_TREE_SIZE 100


typedef int ElemType;

typedef struct ParentNode_
{
	ElemType data; //节点数据
	int parent;//双亲位置
}ParentNode


typedef struct 
{
	ParentNode nodes[MAX_TREE_SIZE]; //
	int r;//根的位置
	int n;//节点数
}ParentTree;

