#include <stdio.h>

/*求 列表的 个数*/



int count(int m[],int *num)
{
    if(m[*num])
    {
        *num++;
        count(m,num);
    }

}


int main(int argc, char const *argv[])
{
    int m[] = {2,3,43,33,56,77,89,9,4,2,3,4,6,8,22};
    int *num = 0;

    count(m,num);


    printf("%d \n", *num);
    return 0;
}
