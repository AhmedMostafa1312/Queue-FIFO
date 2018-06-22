#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};


void display(struct node *head);
void DeQueue(struct node **head); 
void EnQueue(struct node **head,struct node **last_list);