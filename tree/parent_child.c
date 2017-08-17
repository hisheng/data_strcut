// 双亲孩子 表示法   树结构

#define MAX_TREE_SIZE 100

//孩子节点
typedef struct CTNode
{
	int child; //孩子结点的下标
	struct CTNode *next; //指向下一个孩子结点的指针

} *ChildPtr;

//表头结构
typedef struct
{
	ElemType data;//存放在树种结点的数据
	int parent;//存放双亲的位置下标
	ChildPtr firstchild;//指向第一个孩子的指针
}CTBox;

//树结构

typedef struct 
{
	CTBox nodes[MAX_TREE_SIZE];
	int r;//根的位置
	int n;//节点数
};