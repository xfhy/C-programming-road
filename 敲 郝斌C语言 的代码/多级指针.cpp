/*
2015��1��31��09:31:55
�༶ָ�� 
*/ 
# include<stdio.h>
int main(void)
{
	int i;
	int * p = &i;  //p = &i 
	int ** q = &p;  //q = &p
	int *** r = &q;  //r = &q         ���ַ 
	/*
	   rָ��q�ĵ�ַ��qָ��p�ĵ�ַ��pָ��i�ĵ�ַ��
	   ���� *p = **q = ***r = i;  
	*/ 
	
	*p = 233;
	printf("%d\n",i); 
	
	**q = 666;
	printf("%d\n",i); 
	
	***r = 856;
	printf("%d\n",i); 
	
	
	return 0;
} 

/*
��DEV C++����������ǣ�
233
666
856

--------------------------------
Process exited after 0.1283 seconds with return value 0
�밴���������. . .
*/
