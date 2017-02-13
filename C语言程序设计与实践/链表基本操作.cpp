/*
2015年5月24日23:08:55
链表基本操作 
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
	list * head,*p,*q;   //头指针,上一个,下一个 
	head = (list *)malloc(sizeof(list)); 
	p = head;
	printf("请输入数字(以-1结束):");
	scanf("%d",&x);
	while(x!=-1)
	{
		q = (list *)malloc(sizeof(list)); 
		q->num = x;
		p->next = q;   //上一个结构体的下一个是刚产出来的 
		p = q;           //向后移 
		scanf("%d",&x);  //继续输入 
	} 
	p->next = '\0';    //最后那个链表元素是空的 
	return head;
}

void add(list * head,int x,int y)           //添加元素    数据,位置 
{
	list *p,*q,*s;
	int i=0;             //记录位置 
	s = (list*)malloc(sizeof(list));        //需要插入的临时链表元素 
	s->num = x;
	p = head;                               //上一个 
	q = head->next;                         //下一个 
	while(q!='\0' && i!=y-1)    //当q不是最后一个 当位置为y-1就退出循环(插入位置:y)
	{
		p = q;
		q = q->next;       //p,q都向后移动一个单位 
		i++;               //位置+1 
	}
	//到这里时已经是相应的位置已找到了 
	p->next = s;           //把上一个指向s(临时变量链表元素) 
	s->next = q;            ////把s指向下一个
}

void del(list * head,int i)      //删除  数据 
{
	list *p,*q;
	int t=0;
	p = head;
	q = head->next;
	while(q!='\0' && t!=i-1)     //删除第i个 
	{
		p = q;
		q = q->next;
		t++;
	}
	p->next = q->next;    //把中间那个元素跳过 
} 

void print(list * head)
{
	list *p;
	p = head->next;    //从第一个元素开始 
	if(p=='\0')
	  printf("链表是空的!\n");
	else 
	{
		do
	    {
	    	printf("%4d",p->num);
	    	p = p->next;
		}while(p!='\0');          //当不是最后一个 
	}
}

int main(void)
{
	int x,y,i;
	list * head;
	head = creat();
	print(head);
	printf("请输入需要插入的数,及其位置(x,y)");
	scanf("%d,%d",&x,&y);
	add(head,x,y); 
	print(head);
	printf("请输入需要删除元素的位置:\n");
	scanf("%d",&i); 
	del(head,i);
	print(head);
	
	return 0;
} 
