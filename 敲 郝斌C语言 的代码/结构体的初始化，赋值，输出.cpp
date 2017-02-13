/*
2015年2月2日11:22:06
结构体的初始化，赋值，输出 ,改变成员 
*/ 
# include<stdio.h>

struct student    //无括号    定义结构体 
{
   int age;
   float score;
   char sex;	
};     //分号不能省 

int main(void)
{
	/*   第一种初始化结构体方法 
	struct student st1;  
	
	st1.age = 18;     //先编译,然后才可以直接打点它就出来age,score,sex选项 
	st1.score = 100;
	st1.sex = 'M';
	*/
	struct student st2 = {19,99,'F'};   //第二种初始化结构体方法 
	
	/*
	struct student * p;     //第一种改变结构体成员的方法 
	p = &st2;               //*P就是st2 
	p->age = 18;        //在内部会被转化成(*p).age 相当于st2.age 
	p->score = 66;
	p->sex = 'F';
	*/
	st2.age = 18;    //第二种改变结构体成员的方法 
	printf("age = %d,scare = %f,sex = %c",st2.age,st2.score,st2.sex);   //取出了结构体中所有成员 
	
	return 0;
}
