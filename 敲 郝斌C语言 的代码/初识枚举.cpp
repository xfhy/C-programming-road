/*
2015年2月5日13:06:04
初识枚举 
枚举:把所有的事务一一列举出来 
*/

# include <stdio.h>

enum weekday 
{
	monday,tuesday,wednesday,thursday,friday,saturday,sunday              //这里最后没有分号 
} ;    //分号不能省 

void f(enum weekday i)
{
   switch(i)
   {
   	case 0:
   		printf("monday");
   		break;
   	case 1:
   		printf("tuesday");
   		break;
   	case 2:
   		printf("wednesday");
   		break;
	case 3:
		printf("thursday\n");
		break;
	case 4:
		printf("friday\n");
		break;
	case 5:
		printf("saturday\n");
		break;
	case 6:
		printf("sunday\n");
		break;  
   }	
}

int main(void)
{
	f(friday);
	
	return 0;
}
