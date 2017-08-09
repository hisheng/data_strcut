/*队列*/

#ifndef QUEUE_H
#define QUEUE_H



#include <stdlib.h>
#include "list.h"

typedef List Queue;

#define queue_init list_init

#define queue_destory list_destory


/*往队列尾部插入元素*/
int queue_enqueue(Queue *queue,const void *data);

/*从队列头部 删除元素*/
int queue_dequeue(Queue *queue,void **data);

#define stack_peek(stack) ((stack)->head == NULL ? NULL :(stack)->head->data)
#define queue_size list_size

#endif