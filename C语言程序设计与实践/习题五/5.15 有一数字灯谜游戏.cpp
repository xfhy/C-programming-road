/*
2015年4月6日16:03:36
5.15 有一数字灯谜游戏... 
*/
# include <stdio.h>

int main(void)
{
	int A,B,C,D;
	for(A=1; A<=9; A++)
	{
		for(B=0; B<=9; B++)
		{
			for(C=1; C<=9; C++)
			{
				for(D=0; D<=9; D++)
				{
                   if( (A*1000+B*100+C*10+D) - (C*100+D*10+C) == (A*100+B*10+C) )	
				      printf("A=%d B=%d C=%d D=%d ",A,B,C,D);				
				}
			} 
		} 
	} 
	
	return 0; 
} 
