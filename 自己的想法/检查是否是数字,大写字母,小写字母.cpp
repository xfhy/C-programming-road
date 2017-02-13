/*
2015年月30日14:39:05
检查是否是数字,大写字母,小写字母 
*/
# include <stdio.h>
# include <ctype.h>
 
int main(void)
{
	int i,j=0,k=0,l=0;
	char a[10] = {'a','b','R','F','3','5','f','4','d','5'}; 
	for(i=0; i<10; i++)
	{
		if(isdigit(a[i]))
		  j++;
		else if(isalpha(a[i]))
		  k++;
		else if(islower(a[i]))
		  l++; 
	}
	printf("数字有:%d个,大写字母有%d个,小写字母有%d个\n",j,k,l);
	
	return 0; 
} 
