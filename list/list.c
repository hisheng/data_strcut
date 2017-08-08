#include <stdlib.h>
#include <string.h>
#include "list.h"



void list_init(List *list,void(*destory)(void *data))
{
    list->size = 0;
    list->destory = destory;
    list->head = NULL;
    list->tail = NULL;

    return ;
}





void list_destory(List *list)
{
    void *data;
    while(list_size(list) > 0)
    {
        if(list_rem_next(list,NULL,(void **)&data) == 0 && list->destory != NULL )
        {
            list->destory(data);
        }


    }



    return;
}
