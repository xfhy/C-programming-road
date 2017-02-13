/*
动态链表  查找 
*/
# include <stdio.h>
# include <malloc.h>

struct node
{
	int data;
	struct node *next; 
}; 
typedef struct node list;

list * creak(void)
{
	list *h,*s,*r;
	int k;
	h = (list *)malloc(sizeof(list));
	r = h ;
	scanf("%d",&k);
	while(k!=-1)
	{
		s = (list *)malloc(sizeof(list));
		s->data = k;
		r->next = s;
		r = s;
		scanf("%d",&k);
	}
	
	return h; 
} 

void output(list *h)
{
	list *r;
	r = h->next;
	if(r=='\0')
	  printf("空链表!\n");
	else
	{
		do
		{
			printf("%4d",r->data);
			r = r->next;   //往后移 
		}while(r!='\0'); 
	} 
}

void found(list *h,int x)   //自己想的,查找 
{
	int i=1;
	list *r; 
	r = h->next;
	if(r=='\0')
	  printf("空链表!\n");
	else
	{
		do
		{
			if(r->data==x)
			{
			  printf("\n需要查找的在第%d个\n",i);
			  return ;
		   }
			else
			{
				i++;
			   r = r->next;   //往后移 
		   }
		}while(r!='\0'); 
		if(r=='\0')
		  printf("然而,并没有找到你想要的!");
	} 
}

int main(void)
{
   list *h = creak();	
	output(h);
	int x;
	printf("\n请输入想查找的元素:\n");
	scanf("%d",&x); 
	found(h,x);
	
	return 0; 
} 
