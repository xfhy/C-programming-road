/*
2015��3��8��09:58:57
ö������ 
*/
# include <stdio.h>

enum colors{red=1,green,blue};     //����ö��,���û���޸�red=1;��ôĬ�ϴ�0��ʼ,0  1  2  3  4  ...... 

int main(void)
{
	int num;
	enum colors col;            //col��ö�ٱ��� 
	printf("1=red,2=green,3=blue.  ѡ��:");
	scanf("%d",&num);
	col = (enum colors)num;   //ǿ������ת��
	switch(col)
	{
		case red:
			printf("red\n");
			break;
		case green:
			printf("green\n");
			break;
		case blue:
			printf("blue\n");
			break;
		default:
			printf("??\n");
	} 
	
	
	return 0; 
} 
