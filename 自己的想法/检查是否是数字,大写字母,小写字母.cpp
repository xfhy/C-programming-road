/*
2015����30��14:39:05
����Ƿ�������,��д��ĸ,Сд��ĸ 
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
	printf("������:%d��,��д��ĸ��%d��,Сд��ĸ��%d��\n",j,k,l);
	
	return 0; 
} 
