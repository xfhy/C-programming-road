/*
2015年3月10日20:36:13
从文件D:\txt\poem.txt逐行读出文件文本,在显示器上输出 
*/
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	 char s[256];
	 FILE * fp;        //定义文件指针 
	 fp = fopen("D:\\txt\\3月11号流程.txt","r");
	 if(!fp)           //或者   if(fp==NULL)  一样的 
	 {
	 	printf("未能成功打开文件!\n");
	 	exit(1);
	 }
	 while(!feof(fp))  //feof(fp)是判断fp是否结束的,当未结束就执行循环 
	 {
	 	fgets(s,256,fp);   //fgets();是把fp文件的内容复制给s,256指明存储数据的大小 
	 	printf("%s",s);
	 }
	 
	 fclose(fp);    //使用完文件记得关闭 
	  
	 return 0;
} 
