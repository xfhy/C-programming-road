/*
 2015��1��27��20:45:41
 ������֮�� 
*/
# include <stdio.h>
void add(int i,int j,int sum)
{
	sum = i+j;
	printf("����֮��Ϊsum = %d\n",sum);
} 
int main(void)
{
   int sum;
   int a,b;
   char ch; 
   do
   { 
        printf("������Ҫ��͵���������");
		scanf("%d",&a);
		scanf("%d",&b);
 		add(a,b,sum);
 		
		printf("�������ô����Y/N��:");
		scanf(" %c",&ch);//�ǵ�ȡ��ַ������������������ 
   }while('y' == ch||'Y' == ch);

   return 0;
}

