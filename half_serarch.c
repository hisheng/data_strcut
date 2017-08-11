/*二分搜索（英语：binary search），也称折半搜索*/

#include <stdio.h>

int middle_int(int *low, int *high)
{
    int middle;
    middle = (*low + *high)/2;
    return middle;
}


int half_search(int a[],int *low,int *high)
{
    int middle ;
    middle = middle_int(low,high);
    if (a[middle] !=  55)
    {
        if (a[middle] > 55)
            *low = middle ;
        if (a[middle] < 55)
            *high = middle ;
        half_search(a,low,high);
    }

    return middle;
}

int main(int argc, char const *argv[])
{
    int a[11] = {1,1,2,3,5,8,13,21,34,55,89};
    int *low,middle,*high;
    *low = 0;
    *high = 10;

    printf("找到了 55 索引为 a[%d]\n",half_search(a,low,high));


    return 0;
}
