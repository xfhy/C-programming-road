/*
2015年5月13日21:59:50
字符串排序 
*/
# include <stdio.h>
# include <string.h>

void sort(char a[][10],int n)
{
	char t[10];
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(strcmp(a[i],a[j])>0)   //交换字符串的算法 
			{
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
		}
	}
	for(i=0 ;i<n; i++)
	{
		printf("%s ",a[i]);    //a[i]表示每个字符串 
	}
}

int main(void)
{
	char a[5][10] = {"chengdu","shanghai","guangzhou","beijing","xiamen"};
	sort(a,5);
	
	return 0; 
} 
