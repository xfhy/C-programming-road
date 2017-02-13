# include <stdio.h>
# include <time.h>
# include <stdlib.h>
# include <conio.h>

int main(void)
{
	char a[15],c;
	int i,t=0,x=1,len=15,test=1,len1=10,sec1,sec2;
	printf("\t\t欢迎来到潇风寒月专属的打字小游戏!\n\n");
	while(x==1 && len<=20)
	{
		printf("\t\t第%d关\n\n",test);
		printf("\t字母个数:%d\n",len);
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
		printf("\n\t%d/%d  正确/总数\n",t,len);
		if(t<=len1)
		{
			printf("嘿,兄弟,你这关的错误率太高了!\n");
			printf("想继续攻破这一关吗?  亲  \n");
			printf("是/否  (1/0) :");
			scanf("%d",&x);
		}
		else
		{
			printf("恭喜通关!\n");
			system("pause"); 
			len++; 
		    test++;
		} 
		t = 0;
		len1++;
		system("cls");
		if(len==20)
		  printf("\t\t哟,小伙子不错嘛,这里是最后一关啦!\n\n");
	}
	
	system("pause");
	return 0;
}
