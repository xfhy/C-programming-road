/*
2015��5��24��23:08:55
����������� 
*/
# include <stdio.h>
# include <malloc.h>

struct node
{
	int num;
	struct node * next;
};

typedef struct node list;

list *creat(void)
{
	int x;
	list * head,*p,*q;   //ͷָ��,��һ��,��һ�� 
	head = (list *)malloc(sizeof(list)); 
	p = head;
	printf("����������(��-1����):");
	scanf("%d",&x);
	while(x!=-1)
	{
		q = (list *)malloc(sizeof(list)); 
		q->num = x;
		p->next = q;   //��һ���ṹ�����һ���Ǹղ������� 
		p = q;           //����� 
		scanf("%d",&x);  //�������� 
	} 
	p->next = '\0';    //����Ǹ�����Ԫ���ǿյ� 
	return head;
}

void add(list * head,int x,int y)           //���Ԫ��    ����,λ�� 
{
	list *p,*q,*s;
	int i=0;             //��¼λ�� 
	s = (list*)malloc(sizeof(list));        //��Ҫ�������ʱ����Ԫ�� 
	s->num = x;
	p = head;                               //��һ�� 
	q = head->next;                         //��һ�� 
	while(q!='\0' && i!=y-1)    //��q�������һ�� ��λ��Ϊy-1���˳�ѭ��(����λ��:y)
	{
		p = q;
		q = q->next;       //p,q������ƶ�һ����λ 
		i++;               //λ��+1 
	}
	//������ʱ�Ѿ�����Ӧ��λ�����ҵ��� 
	p->next = s;           //����һ��ָ��s(��ʱ��������Ԫ��) 
	s->next = q;            ////��sָ����һ��
}

void del(list * head,int i)      //ɾ��  ���� 
{
	list *p,*q;
	int t=0;
	p = head;
	q = head->next;
	while(q!='\0' && t!=i-1)     //ɾ����i�� 
	{
		p = q;
		q = q->next;
		t++;
	}
	p->next = q->next;    //���м��Ǹ�Ԫ������ 
} 

void print(list * head)
{
	list *p;
	p = head->next;    //�ӵ�һ��Ԫ�ؿ�ʼ 
	if(p=='\0')
	  printf("�����ǿյ�!\n");
	else 
	{
		do
	    {
	    	printf("%4d",p->num);
	    	p = p->next;
		}while(p!='\0');          //���������һ�� 
	}
}

int main(void)
{
	int x,y,i;
	list * head;
	head = creat();
	print(head);
	printf("��������Ҫ�������,����λ��(x,y)");
	scanf("%d,%d",&x,&y);
	add(head,x,y); 
	print(head);
	printf("��������Ҫɾ��Ԫ�ص�λ��:\n");
	scanf("%d",&i); 
	del(head,i);
	print(head);
	
	return 0;
} 
