/*
2015��3��5��21:22:40
�Ӵ����� 
*/
# include <stdio.h>
# include <malloc.h> 
//#define MAX 100 
typedef struct           //����typedef�������֮��,str���ǽṹ��������� 
{  
   char ch[100];  
   int len; 
}str;  

/*-------------�����ַ����ĳ���--------------*/
int len(str *r)    //��Ϊ��������r�ǽṹ��ָ��,so�����β�Ҳ��Ӧ���ǽṹ��ָ�� 
{  
   int i=0;  
	while(r->ch[i]!='\0')   
		i++;
	  
	return i; 
}   

int indexstr(str *r,str *r1)
{  
	 int i,j,k;  
	 
	 for(i=0; r->ch[i]; i++)      //��ԭ�ַ�����һ���ַ���ʼ,���β�����ƥ�䴮���ַ���ͬ���Ǹ��ַ� 
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
	printf("����Ŀ�괮��");   
	gets(r->ch);            //��������ַ�����ֵ��r����ṹ��ָ�� 
	r->len=len(r);        //len������ĺ��� 
	printf("����Ҫƥ��Ĵ���");  
	gets(r1->ch);          //��������ַ�����ֵ��r1����ṹ��ָ�� 
	r1->len=len(r1);       
	i=indexstr(r,r1);  
	
	if(i!=-1)   
		printf("��һ�γ��ֵ�λ���ǵ�%d��\n",i+1);  
	else  
		printf("���ڸô��У�\n"); 
} 
