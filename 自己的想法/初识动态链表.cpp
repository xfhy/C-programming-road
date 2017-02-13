/*
2015年3月21日10:33:59
初识链表  动态  输出  插入  删除 
*/
# include <stdio.h>
# include <malloc.h>
 
struct node
{
	int data;   //数据 
	struct node *next;   //指向下一个结构体的指针 
}; 

typedef struct node list;

list * crate(void)    //创建链表 
{
	int i,j;
	list *h,*s,*r;     //头指针,下一个结构体,连接下一个结构体 
	h = (list *)malloc(sizeof(list));     //头节点 
	r = h;                                 //r是流动的 
	scanf("%d",&j);
	while(j!=-1)
	{
		s = (list *)malloc(sizeof(list));    //s是下一个结构体 
		s->data = j;
		r->next = s;        //r为上一个结构体,r->next指向下一个结构体的首地址 
		r = s;              //r指向现在这个结构体的首地址(相当于替换),下次又顶替下一个结构体 
		scanf("%d",&j);     
	}
	r->next = '\0';
	
	return h;
}

void prinf_list(list *h)    //输出链表 
{
	list * p;
	p = h->next;   //把头结点指向的赋给p 
	if(p == '\0')   //如果p是空的,则是空链表 
	  printf("空链表!\n");
	else	
   {
   	do
   	{
   		printf("%4d",p->data);
   		p = p->next;         //当p不是'\0'时,p不断的后移 
	}while(p!='\0');
		printf("\nend!\n");
	}
} 

void input(list *h,int x,int y)    //插入函数    位置,数据 
{
	list *s,*p,*q;
	s = (list *)malloc(sizeof(list));  //构建需要插入的结构体 
	s->data = y;                //将数据放进去 
	q = h;                 //q是需要插入结构体的前一个结构体 
	p = h->next;           //p是需要插入结构体的下一个结构体 
	while(p!='\0' && p->data!=x)  //如果不是最后一个,并且不等于x,q,p就往后移 
	{
		q = p;
		p = p->next;
	}
	q->next = s;     //前一个指向s 
	s->next = p;      //s指向下一个 
}

int main(void) 
{
	int x,y;
	list * h;
	printf("请输入原链表的数据(以-1结束):\n");
    h = crate();
    printf("原链表为:\n"); 
    prinf_list(h);
	printf("请输入插入的位置,数据(中间用逗号隔开):\n");
	scanf("%d,%d",&x,&y);
    printf("插入后的链表为:\n"); 
    input(h,x,y);
	prinf_list(h); 
   
	return 0; 
}
