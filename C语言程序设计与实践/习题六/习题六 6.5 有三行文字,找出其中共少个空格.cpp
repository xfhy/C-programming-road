/*
2015年4月17日16:57:49
习题六 6.5 有三行文字,找出其中共少个空格,多少个单词.规定单词间以一个或多个空格
相隔 ....
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char a[3][100] = {" fsa dfga dsg sags",    //定义二维字符数组 
	                  " ga gsa ga sdgas",
					  " gdfs       ewg  gw  hew"
					 };
	int i,sum=0,len=0;
	char c;
	printf("原二维数组为:\n");
	for(i=0; i<3; i++)
	{
	  printf("%s\n",a[i]);         //输出每一行的字符 
	  len = len + strlen(*(a+i));  //将每一行的字符数量加起来 
    }
    int j=0;
    for(i=0; i<3; i++)   //控制行 
    {
    	for(j=0; j<strlen(*(a+i)); j++)   //控制列,每一行的长度为strlen(*(a+i))
    	{
    		c = a[i][j];   //将a数组里的每一个元素都赋值给字符c 
    		if(c==' ')     //将c拿来一一判断 
    		  sum++;        //如果是空格则记录下来一个 
		}
	}
    printf("\n上面的字符串里有%d个空格\n",sum);
	
	return 0;
} 
