/*
2015��4��3��15:41:19
100ƥ����100���� 
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
