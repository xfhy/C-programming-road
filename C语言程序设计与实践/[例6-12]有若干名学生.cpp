/*
2015年4月13日7:46:52
[例6-12]有若干名学生,输入学生名,要求查询该学生是否属于该班,输出相应的信息 
*/
# include <stdio.h>
# include <string.h> 

int main(void)
{
	char hehe[4][10] = {"wang","li","guo","zhang"};
	int flag,i;
	char name[10];
	printf("Enter your name:\n");
	gets(name);         //从键盘得到一个字符串,赋值给name 
	for(i=0; i<4; i++)  //从第一个元素开始,依次往后面进行比较 
		if(strcmp(name,hehe[i])==0)   //如果相等则strcmp()返回值为0 
		  flag = 1;
	if(flag==1)
	  printf("%s is in our class!\n",name);
	else
	  printf("%s is not in our class\n",name);
	
	return 0; 
} 
