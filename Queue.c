#include "Queue.h"

int main()
{
puts("----------------Implementation of Queue-------------------");
int number_of_lists;
printf("Enter number of lists : ");
scanf("%d",&number_of_lists);
struct node *list,*prev_list,*last_list,*head;
head=NULL;
for (int i = 0; i < number_of_lists; ++i)
 {
 	list=malloc(sizeof(struct node));
 	printf("Enter the data of list %d : ",i+1);
 	scanf("%d",&list->data);
 	list->next=NULL;
 	if (head==NULL)
 	{
 		head=list;
 	}
 	else
 	{
 		prev_list->next=list;
 	}
 	prev_list=list;
 } 
 last_list=prev_list;

DeQueue(&head); 
EnQueue(&head,&last_list); 

 
 
return 0;
}



