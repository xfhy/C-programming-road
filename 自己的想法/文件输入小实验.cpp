/*
2015年5月7日22:00:13
文件输入小实验 
*/

	/*
	FILE * fp;
	char a[80] = "gsag";
	fp=fopen("d:\\123.cpp","r");
	char c;
	if(fp==NULL) 
	{
		printf("Can't open file!\n");
		exit(0);
	}
	else
	{
		while(!feof(fp))
		{
			c = fgetc(fp);
			fprintf(stdout,"%c",c);   //将c以%c输出到屏幕 
		}
		fclose(fp);
    }*/
#include <stdio.h>
#include <string.h>

int main()
{
 char s[4]="abc",sc='n';//比较的字符串和字符
 FILE *fp;
 char filename[100],c; 
 int  i=0,n1=0,n2=0;
 long fpos,len;

 printf("input filename:\n");
 gets(filename);//输入文件名称

 if((fp=fopen(filename,"r"))==NULL)//打开文件
    {
  printf("open %s error!\n",filename);
  return 1;
 }
   
 len=strlen(s);
 c=fgetc(fp);
 while(!feof(fp))
 {
 if(c==s[0])//如果第一个字符相等,比较剩下的字符串
 {
  fpos=ftell(fp);//记住当前文件指针位置
  for(i=1;i<len;i++)
  {
   if(fgetc(fp)!=s[i])//如果不匹配,跳出循环
   {
    fseek(fp,fpos,0);//重新设置指针位置
    break;
   }
  }
  if(i==len)//如果匹配成功,累加数目
   n1++;
  
 }
 if(c==sc)//与字符sc匹配,累加数目
  n2++;
    c=fgetc(fp);
 }
 
 printf("\n与字符串%s匹配的有%d个\n",s,n1);//输出匹配个数
 printf("与字符%c匹配的有%d个\n",sc,n2);   
 getchar();
 return 0;
}
