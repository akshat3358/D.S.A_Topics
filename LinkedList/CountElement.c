#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
void count(struct node *start)
{
	struct node *p;
	int cnt=0;
	p=start;
	while(p!=NULL)
	{
		p=p->link;
		cnt++;
	}
	printf("Number of elements are %d\n",cnt);
}/*End of count() */
