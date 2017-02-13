/*
2015年4月3日15:41:19
100匹马驼100担货 
*/
# include <stdio.h>

int main(void)
{
	int big,middle,small;
	for(big=1; big<=100; big++)
	{
		for(middle=1; middle<=100; middle++)
		{
			for(small=1; small<=100; small++)
			{
				if(big*3+middle*2+small==100)
				   printf("%d %d %d \n",big,middle,small); 
			}
		} 
	} 
	
	return 0; 
} 
