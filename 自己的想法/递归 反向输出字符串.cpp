/*
2015年4月24日9:41:29
递归 反向输出字符串 
*/
# include <stdio.h>
# include <string.h>

void bb(char *s)
{
	 if(*s!='\0')    //当字符数组s不是'\0'的时候 
	 {
	    bb(s+1);    //将位置往后移 
	    printf("%c",*s);  //输出每个字符 
     }
}

int main(void)
{
	char s[] = "I am a good boy!";
	bb(s); 
	
	return 0; 
} 
