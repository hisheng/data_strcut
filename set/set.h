/*集合抽象数据类型 用链表实现*/

#ifndef SET_H
#define SET_H


#include <stdlib.h>
#include "list.h"

typedef List Set;



/**/
void set_init(Set *set,int (*match) (const void *key1,const void *kety2),void (*destory) (void *data));

#define set_destory list_destory

int set_insert(Set *set,const void *data);
int set_remove(Set *set ,void **data);
int set_union(Set *setu ,const Set *set1,const Set *set2);
int set_intersection(Set *seti ,const Set *set1,const Set *set2);
int set_difference(Set *setd ,const Set *set1,const Set *set2);

int set_is_member(const Set *set ,const void *data);
int set_is_subset(const Set *set1,const Set *set2);
int set_is_equal(const Set *set1,const Set *set2);

#define set_size(set) ((set)->size)





#endif
