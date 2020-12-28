#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

void display(struct node *last)
{
	struct node *p;
	if(last==NULL)
	{
		printf("List is empty\n");
		return;
	}
	p=last->link;
	do 
	{
		printf("%d ",p->info);
		p=p->link;
	}while(p!=last->link);
	printf("\n");
}