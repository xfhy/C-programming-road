/*
2015��3��22��11:07:05
ɾ����̬��������� 
*/
# include <stdio.h>
# include <malloc.h>

struct node  //����ṹ�� 
{
	int data;
	struct node *next; 
}; 
typedef struct node list;  //������list 

list *creat(void)   //�������� 
{
	int k,i;
	list * h= (list *)malloc(sizeof(list));  //ͷ�ڵ� 
	list *r,*s;    //s����������ʱ����Ľṹ��,r�������� 
	r = h;    //����rָ��h 
	scanf("%d",&k);
	while(k!=-1)
   {
   	s = (list *)malloc(sizeof(list));   //��ʱ�Ľṹ�� 
   	s->data = k;   
   	r->next = s;    //����һ����nextָ��s 
   	r = s;          //����r���s 
   	scanf("%d",&k);
	}
	r->next = '\0';   //���һ���ṹ���next����Ϊ'\0',��ʾ���� 
	
	return h; 
} 

void del(list *h,int x)   //ɾ�� 
{
	list *s,*q,*p;
	q = h;   //q����һ�� 
	p = h->next;   //p����һ�� 
	while(p!='\0' && p->data!=x)  //����������һ���Ҳ���x,��һֱ���� 
	{
		q = p;  //���� 
		p = p->next;  //���� 
	}
	if(p->data==x)
	{
		q->next = p->next;   //������2�� 
	}
}

void output(list *h)
{
	list *r;
	r = h->next;
	if(r =='\0')
	  printf("������!\n");
	else
	{
		do
		{
			printf("%4d",r->data);
			r = r->next;   //r��ͣ�����´���
		}while(r!='\0');
		printf("   end\n");
	} 
	
}

int main(void)
{
	list *h;
	int x;
	h = creat();
	printf("ԭ����Ϊ:\n"); 
	output(h);
	printf("��������Ҫɾ�����Ǹ�����:");
	scanf("%d",&x);
	printf("ɾ��֮��Ϊ:\n");
	del(h,x); 
	output(h);
	
	return 0; 
} 
