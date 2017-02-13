/*
2015��3��21��10:33:59
��ʶ����  ��̬  ���  ����  ɾ�� 
*/
# include <stdio.h>
# include <malloc.h>
 
struct node
{
	int data;   //���� 
	struct node *next;   //ָ����һ���ṹ���ָ�� 
}; 

typedef struct node list;

list * crate(void)    //�������� 
{
	int i,j;
	list *h,*s,*r;     //ͷָ��,��һ���ṹ��,������һ���ṹ�� 
	h = (list *)malloc(sizeof(list));     //ͷ�ڵ� 
	r = h;                                 //r�������� 
	scanf("%d",&j);
	while(j!=-1)
	{
		s = (list *)malloc(sizeof(list));    //s����һ���ṹ�� 
		s->data = j;
		r->next = s;        //rΪ��һ���ṹ��,r->nextָ����һ���ṹ����׵�ַ 
		r = s;              //rָ����������ṹ����׵�ַ(�൱���滻),�´��ֶ�����һ���ṹ�� 
		scanf("%d",&j);     
	}
	r->next = '\0';
	
	return h;
}

void prinf_list(list *h)    //������� 
{
	list * p;
	p = h->next;   //��ͷ���ָ��ĸ���p 
	if(p == '\0')   //���p�ǿյ�,���ǿ����� 
	  printf("������!\n");
	else	
   {
   	do
   	{
   		printf("%4d",p->data);
   		p = p->next;         //��p����'\0'ʱ,p���ϵĺ��� 
	}while(p!='\0');
		printf("\nend!\n");
	}
} 

void input(list *h,int x,int y)    //���뺯��    λ��,���� 
{
	list *s,*p,*q;
	s = (list *)malloc(sizeof(list));  //������Ҫ����Ľṹ�� 
	s->data = y;                //�����ݷŽ�ȥ 
	q = h;                 //q����Ҫ����ṹ���ǰһ���ṹ�� 
	p = h->next;           //p����Ҫ����ṹ�����һ���ṹ�� 
	while(p!='\0' && p->data!=x)  //����������һ��,���Ҳ�����x,q,p�������� 
	{
		q = p;
		p = p->next;
	}
	q->next = s;     //ǰһ��ָ��s 
	s->next = p;      //sָ����һ�� 
}

int main(void) 
{
	int x,y;
	list * h;
	printf("������ԭ���������(��-1����):\n");
    h = crate();
    printf("ԭ����Ϊ:\n"); 
    prinf_list(h);
	printf("����������λ��,����(�м��ö��Ÿ���):\n");
	scanf("%d,%d",&x,&y);
    printf("����������Ϊ:\n"); 
    input(h,x,y);
	prinf_list(h); 
   
	return 0; 
}
