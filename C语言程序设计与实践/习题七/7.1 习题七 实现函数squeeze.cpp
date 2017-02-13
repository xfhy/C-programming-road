/*
2015年4月20日18:35:39
7.1 习题七 实现函数squeeze(char s[],char c), 
*/
# include <stdio.h>
# include <string.h>
 
void squeeze(char s[],char c)
{
	int i,len,j,num=0;
	len = strlen(s);      //计算s数组的长度 
	for(i=0; i<len; i++)   //在s数组的范围内查找与c相同的字母 
	{
		if(c==s[i])
		{
			num++;         //记录s中有多少个与c相同的字母,待会输出时需要这个 
			for(j=i; j<len-num; j++)  //在s[i]那里开始,直到长度-num 
			{
				s[j] = s[j+1];   //将s后面的覆盖前面的
			}
			i=i-1;               //如果遇到两个c连着的那么缺少这个就不行
			                   //因为它会直接跳过第二个c 
		}
	}
	printf("现在的字符串为\n");
	for(i=0; i<len-num; i++)   //长度减少了 
	{
		printf("%c",s[i]);     //一个一个地输出 
	}
}

int main(void)
{
	char s[] = "I am a good boy! HeHe!";   
	char c;
	printf("原来的字符串为%s\n",s);
	printf("请输入一个需要删除的字符:\n");
	scanf("%c",&c);
	squeeze(s,c);
	
	return 0;
}
