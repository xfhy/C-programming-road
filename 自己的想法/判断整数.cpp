/*
2015��2��17��18:20:35
�ж����� 
*/
# include <stdio.h>

int main(void)
{
    float i;
	printf("��������Ҫ�жϵ�����:");
	
	/*
	if(scanf("%d",&i) == 1)    //�����,������ 
	   printf("������,���Ǹ�����Ŷ!\n");
	else
	   printf("����ѽ��,�����,������!\n"); 
	   */
	scanf("%f",&i);
	if(i==int(i))
	  printf("������,���Ǹ�����Ŷ!\n");
	else
	   printf("����ѽ��,�ⲻ������,����!\n"); 
	   
	return 0; 
} 
