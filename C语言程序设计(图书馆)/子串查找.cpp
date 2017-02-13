/*
2015年3月5日21:22:40
子串查找 
*/
# include <stdio.h>
# include <malloc.h> 
//#define MAX 100 
typedef struct           //有了typedef这个定义之后,str就是结构体的名字了 
{  
   char ch[100];  
   int len; 
}str;  

/*-------------计算字符串的长度--------------*/
int len(str *r)    //因为主函数里r是结构体指针,so这里形参也是应该是结构体指针 
{  
   int i=0;  
	while(r->ch[i]!='\0')   
		i++;
	  
	return i; 
}   

int indexstr(str *r,str *r1)
{  
	 int i,j,k;  
	 
	 for(i=0; r->ch[i]; i++)      //从原字符串第一个字符开始,依次查找与匹配串首字符相同的那个字符 
	 {
		 for(j=i,k=0;  r->ch[j]==r1->ch[k];  j++,k++)  
		 { 
		     if(!r1->ch[k+1])    
		 	     return i;
		}
	}
	
	 return -1; 
}  

int main(void) 
{  
	int i;  
	str a,b;  
	str *r=&a,*r1=&b;  
	r->ch[0]='\0';  
	printf("输入目标串：");   
	gets(r->ch);            //将输入的字符串赋值给r这个结构体指针 
	r->len=len(r);        //len是上面的函数 
	printf("输入要匹配的串：");  
	gets(r1->ch);          //将输入的字符串赋值给r1这个结构体指针 
	r1->len=len(r1);       
	i=indexstr(r,r1);  
	
	if(i!=-1)   
		printf("第一次出现的位置是第%d个\n",i+1);  
	else  
		printf("不在该串中！\n"); 
} 
