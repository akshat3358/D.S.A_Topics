#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *addbefore(struct node *start,int data,int item)
{
	struct node *tmp,*p;
	if(start==NULL )
	{
		printf("List is empty\n");
		return start;
	}	
	/*If data to be inserted before first node*/
	if(item==start->info)
	{
		tmp=(struct node *)malloc(sizeof(struct node));
		tmp->info=data;
		tmp->link=start;
		start=tmp;
		return start;
	}	
	p=start;
	while(p->link!=NULL) 
	{
		if(p->link->info==item)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
	}
	printf("%d not present in the list\n",item);
	return start;
}