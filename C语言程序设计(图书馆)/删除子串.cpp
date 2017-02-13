/*
2015年3月3日17:31:20
删除子串 
*/
# include <stdio.h>
# include <string.h>

void del(char *c,int id,int num)
{
	int len;
	len = strlen(c);
	//printf("%d",strlen(c));
	char * p = c+id;    //指向中间段首字符 
	char * q = c+id+num;   //指向后段首字符 
	while(*q!='\0')
	{
		*p++=*q++;
	} 
	*p = '\0';
	puts(c);
}

int main(void)
{
	char c[100] = "chinachinachina";
	printf("%s\n",c);
	int id,num;
	printf("请输入您想从第多少个字符开始删除\n");
	scanf("%d",&id);
	id = id - 1;
	printf("请输入您想连续删除多少个字符\n");
	scanf("%d",&num);  
	del(c,id,num);
	
	return 0;
} 
