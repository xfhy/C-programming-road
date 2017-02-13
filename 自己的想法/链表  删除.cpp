/*
2015年3月22日11:07:05
删除动态链表的数据 
*/
# include <stdio.h>
# include <malloc.h>

struct node  //定义结构体 
{
	int data;
	struct node *next; 
}; 
typedef struct node list;  //定义别称list 

list *creat(void)   //创建链表 
{
	int k,i;
	list * h= (list *)malloc(sizeof(list));  //头节点 
	list *r,*s;    //s是拿来存临时建造的结构体,r拿来传递 
	r = h;    //先令r指向h 
	scanf("%d",&k);
	while(k!=-1)
   {
   	s = (list *)malloc(sizeof(list));   //临时的结构体 
   	s->data = k;   
   	r->next = s;    //把上一个的next指向s 
   	r = s;          //再用r替代s 
   	scanf("%d",&k);
	}
	r->next = '\0';   //最后一个结构体的next令它为'\0',表示结束 
	
	return h; 
} 

void del(list *h,int x)   //删除 
{
	list *s,*q,*p;
	q = h;   //q是上一个 
	p = h->next;   //p是下一个 
	while(p!='\0' && p->data!=x)  //如果不是最后一个且不是x,就一直往后 
	{
		q = p;  //后移 
		p = p->next;  //后移 
	}
	if(p->data==x)
	{
		q->next = p->next;   //后移移2个 
	}
}

void output(list *h)
{
	list *r;
	r = h->next;
	if(r =='\0')
	  printf("空链表!\n");
	else
	{
		do
		{
			printf("%4d",r->data);
			r = r->next;   //r不停的向下传递
		}while(r!='\0');
		printf("   end\n");
	} 
	
}

int main(void)
{
	list *h;
	int x;
	h = creat();
	printf("原链表为:\n"); 
	output(h);
	printf("请输入需要删除的那个数据:");
	scanf("%d",&x);
	printf("删除之后为:\n");
	del(h,x); 
	output(h);
	
	return 0; 
} 
