/*
2015年2月3日18:22:02
通过函数完成对结构体变量的输入和输出 
*/

# include<stdio.h>
# include<string.h>

struct bedroom
{
    char name[100];
    int age;
    char sex;
};     //分号不能省 

void input(struct bedroom * p)
{
	 (*p).age = 18;
	 (*p).sex = 'F';      
	 strcpy(p->name,"古创");   //输入结构体名字必须用strcpy(,) 这个语句,
	                          // 而且它在# include<string.h>里,所以记得加头文件 
	 
	 return; 
}

void output(struct bedroom Michael)   //只是单纯输出结构体 
{
    printf(" 名字:%s 年龄:%d 性别:%c",Michael.name,Michael.age,Michael.sex); 
	           //名字是字符串,用%s输出	
}

int main(void)
{
	struct bedroom Michael;
	input(&Michael);
	output(Michael);  //这里发送内容比较好,发送地址的话有可能失误把它修改了 
	                 //但是推荐使用发送地址,速度快,占用内存小 
	
	return 0;
}
