/*
2015��1��28��10:00:01
�����ж� 
*/
/*
# include <stdio.h>
int main(void)
{
   int val,i,j;
   j=0;
   
   do
   {
	   printf("����������Ҫ�жϵ����֣�"); 
	   scanf("%d",&val);
	   
	   for(i = 2;i < val; i++)
	   {
	   	 if (val%i == 0)      //�������������ô ��Զ������val%i == 0����ô���ȥʱi���Ѿ��ӵ���val�� 
	   	    break;     //��������������м�ĳʱ����Ѿ���ֹѭ���ˣ�i�����ܼӵ�val 
	   }
	   if(i == val)
	   		printf("YES!\n");
	   else
	   		printf("NO!\n");
   } while(1);
   return 0;
}*/


# include <stdio.h>

bool is_prime(int val)
{
	    int i;
  	   for(i = 2;i < val; i++)
	   {
	   	 if (val%i == 0)      //�������������ô ��Զ������val%i == 0����ô���ȥʱi���Ѿ��ӵ���val�� 
	   	    break;     //��������������м�ĳʱ����Ѿ���ֹѭ���ˣ�i�����ܼӵ�val 
	   }
	   if(i == val)
	   		return true;
			   //printf("YES!\n");
	   else
	   		return false;
			   //printf("NO!\n");
}
int main(void)
{
	int i;
	int m;
	int val;
	
	 do
	 {
		 printf("����������Ҫ�жϵ����֣�"); 
		   scanf("%d",&m);
		
		if(is_prime(m))   //�ж��Ƿ���true      
		                  //���ж�is_prime�Ƿ��Ǻ��������ж��Ǻ��������m��ֵ���͸�val  ִ������is_prime�����ڵĴ��� 
		   printf("YES!\n");
		else
		   printf("NO!\n");
     }while(1);
	
	return 0;
}

