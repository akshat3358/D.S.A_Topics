#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};
struct node *addtoempty(struct node *last,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	last=tmp;
	last->link=last;
	return last;
}
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
struct node *create_list(struct node *last)
{
	int i,n,data;
	printf("Enter the number of nodes : ");
	scanf("%d",&n);
	last=NULL;
	if(n==0)
		return last;
	printf("Enter the element to be inserted : ");
	scanf("%d",&data);
	last=addtoempty(last,data);
			
	for(i=2;i<=n;i++)
	{
		printf("Enter the element to be inserted : ");
		scanf("%d",&data);
		last=addatend(last,data);	
	}
	return last;
}
void main()
{
    struct node *last=NULL;
    last=create_list(last);
}
