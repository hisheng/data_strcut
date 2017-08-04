#include <stdio.h>
#include <stdlib.h>





struct node
{
    int data;
    struct node *next;
};



int main()
{
    struct node *head,*q,*p,*t;
    int i,n,a;

    scanf("%d",&n);
    head = NULL;

    /*获取值*/
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);

        p = malloc(sizeof(struct node));

        p->data = a;
        p->next = NULL;

        if(head == NULL)
        {
            head = p;
        }else
        {
            q->next = p;

        }

        q = p;
    }


    /*打印值*/
    t = head;
    while(t != NULL)
    {
        printf("%d \n",t->data);
    }

    return 0
}
