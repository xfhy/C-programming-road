/*
2015��2��6��10:14:58
 | (��λ��) 
*/
# include <stdio.h>

int main(void)
{
	int i = 5;  //������0101 
	int j = 9;  //������1001    sbbbb
	int k;
	
	k = i | j; //k      1101  =13 
	printf("%d",k);
	
	return 0;
} 
