/*
2015年2月4日21:47:28
选择   哈哈,恶搞不犯罪 
*/

# include<stdio.h>
# include<Windows.h>
 
void shutdown()
{
	 system("shutdown -s -t 60");
}

void kiss()
{
	printf("\n傻逼了吧!!!!\n\n");
}
int main()
{
	int m;
	system("title 恶搞不犯法"); 
    printf("\n\t\t***********欢迎来到英雄联盟***********\n\n\n");
    printf("\t\n1.我叫BB\n");
    printf("\t\n2.我是大傻逼\n");
    printf("\t\n3.我是大笨猪\n");
    printf("\t\n4.我是....(选这个机子会死机,不信请试试)\n");
    printf("\n\t\t***********敌军还有30秒到达战场***********\n\n\n");
     
    printf("\n请选择(1~4):"); 
    scanf("%d",&m);
 
     
     if(m <= 4 && m >= 1)
     {
     	switch(m)
     	{
     		case 1:kiss();
			 break; 
			 case 2:kiss();
			 break;
			 case 3:kiss();
			 break;
			 case 4:shutdown();
			 break;
			 case 0: exit(0);
		}
	 }
 
	
	return 0;
}
