/*
2015年4月6日14:32:43
5.14 编程求s[n] = a+aa+aaa+aaaa....的值.例如当a=2,n=4时,s[n] = 2+22+222+2222;
a和n由键盘输入 
*/
# include <stdio.h>

int main(void)
{
	int sum=0; 
	int temp,i;
	int a,n;
	printf("请输入a和n(中间用逗号隔开)");
	scanf("%d,%d",&a,&n);
	temp = a;    //将第一个加进去 
	for(i=0; i<n; i++)
	{
		sum+=temp;
		printf("%d+",temp);
		temp = temp*10 +a; 
	}
	printf("结果为:%4d",sum);

	return 0;
}
