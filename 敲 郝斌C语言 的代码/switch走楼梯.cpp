/*
2015年1月27日13:11:27
输入你想去的楼层，即可进入！
可以连续更换楼层 
*/
#include<stdio.h>
int main(void)
{
	int val;
	char ch;
	do
	{ 
		printf("请输入您想进入的楼层：");
		scanf("%d",&val);
	
   		switch(val)//看你输入的数是哪一个，即执行下面的哪一个 ，输入1，则执行下面的case 1；
		            //如果下面没有，则执行default 
   			  {
   				case 1:
   					printf("1层开！\n");
   					break;
   				case 2:
   					printf("2层开！\n");
   					break;
   				case 3:
   					printf("3层开！\n");
   					break;
   				default:
   					printf("还没盖到这一层！\n");
   					break;
   		
   			  }
   		printf("您想继续去别的楼层么(Y/N):");
   		scanf(" %c",&ch);//%c前面必须加空格     输入的是字符，所以%c 
	}while('y' == ch||'Y' == ch);//中间是或者 
   

   return 0;
}

