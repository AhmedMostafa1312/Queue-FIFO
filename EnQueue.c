#include "Queue.h"

void EnQueue(struct node **first_node,struct node **last_node)
{
    struct node *new_list,*temp_first,*temp_last;
    temp_last=*last_node;
    temp_first=*first_node;
    new_list=malloc(sizeof(struct node));
    printf("Enter a data of the new list : ");
    scanf("%d",&new_list->data);
    new_list->next=NULL;
    temp_last->next=new_list;

    while(1)
    {
    if(temp_first==NULL)
    {
        //printf("NULL\n");
        break;
    }
    else
    {
        printf("%d\n",temp_first->data);
    }
    temp_first=temp_first->next;
    }
}
