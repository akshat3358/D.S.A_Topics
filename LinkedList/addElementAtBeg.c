#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};

struct node *addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node ));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
	return start;
}