/*
2015��3��7��21:41:11
������ 
*/
# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int found(int i)
{
	   int j;
	   printf("����������Ƚϵ���:"); 
		scanf("%d",&j);
		if(j>i)
		{
		  printf("����������ִ���!\n");
		  found(i);
	   }
		else if(i==j)
		{
			printf("�Ҳ�,��Ȼ���!   ��������\n");
		  return 0;
	   }
		else
		{
		  printf("С��!\n");
		  found(i);
	   }
}

int main(void)
{
	int i,j;
	char ch;
	srand(time(0));
	i = rand()%100;
	printf("ԭ����Ϊ%d\n",i);
	found(i);
	
	return 0;
} 
