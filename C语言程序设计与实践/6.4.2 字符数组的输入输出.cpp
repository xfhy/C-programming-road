/*
2015年4月7日13:00:21
6.4.2 字符数组的输入输出 
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
    char str[4];   //只能存入3个字符,最后一个拿来作为结束符'\0' 
	int i; 
	char bb[] = "abcdefg";
	//for(i=0; i<3; i++)  //字符串的三种输入方法 
	   //scanf("%c",&str[i]);    //记得&            
	   //str[i]=getchar();     //直接从键盘取得值 
	  // gets(str);
	//for(i=0; i<3; i++)
	   //printf("%c  ",str[i]); 
	   //putchar(str[i]);     //输出
	//puts(bb);             //在输出时,遇到第一个字符串结束符'\0'则停止输出并自动换行 
	
	/*----------字符串整体输入输出------------*/ 
	//char sb[6];
	//scanf("%s",sb); 
	//printf("%s",sb); 
	
	/*puts输出的字符串中可以包含转义字符,用以实现某些格式的控制---*/
	//char dd[]=" shanghai \n hangzhou";
	//puts(dd); 
	
	/*--字符串长度strlen()---*/
	//char ff[]="strlen";
	//printf("%d %d\n",strlen("strlen"),strlen(ff));
	
	/*--字符串连接函数strcat(字符数组1,字符数组2),将数组2连接到1的后面---*/
	/*char gg[10] = {"I am"};  数组1的长度应该足够大,以便用来容纳字符数组2 
	char hh[] = {" guoliang"};
	printf("%s ",strcat(gg,hh)); */
	
	/*---字符串复制函数strcpy(数组1,数组2)----*/
	/*char jj[15] = "guchaung";  注意:即使数组1原来有字符,也要被覆盖掉 
	char kk[12] = " is bb";
	strcpy(jj,kk);
	printf("%s \n",jj);*/
	
	/*----字符串比较函数strcmp(字符串1,字符串2)----
	如果字符串1=字符串2,则函数值为0          对两个字符串自左向右逐个字符进行比较,按ascii码值进行比较 
	如果字符串1>字符串2,则函数值为一正数     直到出现不同字符或遇到'\0'为止 
	如果字符串1<字符串2,则函数值为一负数 */
	char kk[10] = {"am am"};
	char temp[10] = {"am am "};
	printf("%d\n",strcmp(kk,temp));
		
	return 0; 
} 
