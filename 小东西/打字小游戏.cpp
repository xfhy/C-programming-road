# include <stdio.h>
# include <time.h>
# include <stdlib.h>
# include <conio.h>

int main(void)
{
	char a[15],c;
	int i,t=0,x=1,len=15,test=1,len1=10,sec1,sec2;
	printf("\t\t��ӭ������纮��ר���Ĵ���С��Ϸ!\n\n");
	while(x==1 && len<=20)
	{
		printf("\t\t��%d��\n\n",test);
		printf("\t��ĸ����:%d\n",len);
		srand(time(0));
		for(i=0; i<len; i++)
		{
			a[i] = 97+rand()%26;
			printf("%4c",a[i]);
		}
		printf("\n");  
		for(i=0; i<len; i++)
		{
			c = getch();
			printf("%4c",c);
			if(c==a[i])
			{
				t++;
				printf("\a");
			}
		}
		printf("\n\t%d/%d  ��ȷ/����\n",t,len);
		if(t<=len1)
		{
			printf("��,�ֵ�,����صĴ�����̫����!\n");
			printf("�����������һ����?  ��  \n");
			printf("��/��  (1/0) :");
			scanf("%d",&x);
		}
		else
		{
			printf("��ϲͨ��!\n");
			system("pause"); 
			len++; 
		    test++;
		} 
		t = 0;
		len1++;
		system("cls");
		if(len==20)
		  printf("\t\tӴ,С���Ӳ�����,���������һ����!\n\n");
	}
	
	system("pause");
	return 0;
}
