#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};

struct node *addatend(struct node *last,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=last->link;
	last->link=tmp;
	last=tmp;
	return last;
}