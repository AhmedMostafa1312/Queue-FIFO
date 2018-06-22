#include "Queue.h"

void DeQueue(struct node **first_node)
{
    struct node *temp;;
    temp = *first_node;
    *first_node=temp->next;
    free(temp);
    temp = *first_node;
    /*
    while(1)
    {
    if(temp==NULL)
    {
        //printf("NULL\n");
        break;
    }
    else
    {
        printf("%d\n",temp->data);
    }
    temp=temp->next;
    }
    */
}
