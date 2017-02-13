/*
2015年3月20日20:18:50
初识链表 
*/
# include <stdio.h>
# include <stdlib.h>
 
struct node                  //链表就是结构体构成的 
{
	int data;                 //数据 
	struct node *next;         //指向下一个结构体(链表)的指针 
}; 

typedef struct node slist;

int main(void)
{
	slist a,b,c,*h,*p;          //h是头指针,p是连接下一个链表的指针 
	a.data = 10;
	b.data = 20;
	c.data = 30;
	h = &a;                    //把a的地址拿给头指针 
	a.next = &b;                //a的指针指向下一个指针的地址 
	b.next = &c;
	c.next = '\0';              //最后那个结构体地指针给它赋'\0' 
	p = h;
	while(p)                    //当p不是最后那个结构体的指针时 
	{
		printf("%4d ",p->data);  //这里不知为何要用  ->  才行,不能用   .    
		p = p->next;            //指向下一个结构体的首地址 
	}
	
	return 0; 
} 
