#include <stdlib.h>

#include "list.h"
#include "stack.h"


/*入栈*/
int stack_push(Stack *stack,const void *data)
{
	return list_ins_next(stack,NULL,data);
}


/*出栈*/
int stack_top(Stack *stack,void **data)
{
	return list_rem_next(stack,NULL,data);
}