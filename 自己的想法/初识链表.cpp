/*
2015��3��20��20:18:50
��ʶ���� 
*/
# include <stdio.h>
# include <stdlib.h>
 
struct node                  //������ǽṹ�幹�ɵ� 
{
	int data;                 //���� 
	struct node *next;         //ָ����һ���ṹ��(����)��ָ�� 
}; 

typedef struct node slist;

int main(void)
{
	slist a,b,c,*h,*p;          //h��ͷָ��,p��������һ�������ָ�� 
	a.data = 10;
	b.data = 20;
	c.data = 30;
	h = &a;                    //��a�ĵ�ַ�ø�ͷָ�� 
	a.next = &b;                //a��ָ��ָ����һ��ָ��ĵ�ַ 
	b.next = &c;
	c.next = '\0';              //����Ǹ��ṹ���ָ�������'\0' 
	p = h;
	while(p)                    //��p��������Ǹ��ṹ���ָ��ʱ 
	{
		printf("%4d ",p->data);  //���ﲻ֪Ϊ��Ҫ��  ->  ����,������   .    
		p = p->next;            //ָ����һ���ṹ����׵�ַ 
	}
	
	return 0; 
} 
