/*
2015��2��19��20:47:55
���������?y/n 
*/
# include <stdio.h>

int main(void)
{
	char ch;
	do
	{
		printf("���������?(y/n):\n");
		ch=getchar();   //�ȼ���scanf("%c",ch);    ��ȡ�ַ� 
		if(ch=='y')
		   printf("OK\n");
		getchar();       //��ȡ�������ڻ������Ļ��з�,�����Է���ֵ 
	}while(ch=='y');
	
	/*do
	{
		printf("���������?(y/n):\n");
		 
		scanf(" %c",&ch);   //%cǰ�����ӿո���� 
		if(ch=='y')
		   printf("OK\n");
	}while(ch=='y'); 
	*/
	return 0; 
	
}
