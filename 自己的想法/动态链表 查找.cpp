/*
��̬����  ���� 
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
	  printf("������!\n");
	else
	{
		do
		{
			printf("%4d",r->data);
			r = r->next;   //������ 
		}while(r!='\0'); 
	} 
}

void found(list *h,int x)   //�Լ����,���� 
{
	int i=1;
	list *r; 
	r = h->next;
	if(r=='\0')
	  printf("������!\n");
	else
	{
		do
		{
			if(r->data==x)
			{
			  printf("\n��Ҫ���ҵ��ڵ�%d��\n",i);
			  return ;
		   }
			else
			{
				i++;
			   r = r->next;   //������ 
		   }
		}while(r!='\0'); 
		if(r=='\0')
		  printf("Ȼ��,��û���ҵ�����Ҫ��!");
	} 
}

int main(void)
{
   list *h = creak();	
	output(h);
	int x;
	printf("\n����������ҵ�Ԫ��:\n");
	scanf("%d",&x); 
	found(h,x);
	
	return 0; 
} 
