/*
2015��2��5��13:06:04
��ʶö�� 
ö��:�����е�����һһ�оٳ��� 
*/

# include <stdio.h>

enum weekday 
{
	monday,tuesday,wednesday,thursday,friday,saturday,sunday              //�������û�зֺ� 
} ;    //�ֺŲ���ʡ 

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
