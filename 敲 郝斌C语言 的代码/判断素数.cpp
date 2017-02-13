/*
2015年1月28日10:00:01
素数判断 
*/
/*
# include <stdio.h>
int main(void)
{
   int val,i,j;
   j=0;
   
   do
   {
	   printf("请输入您需要判断的数字："); 
	   scanf("%d",&val);
	   
	   for(i = 2;i < val; i++)
	   {
	   	 if (val%i == 0)      //如果是素数，那么 永远不可能val%i == 0，那么输出去时i就已经加到了val了 
	   	    break;     //如果不是素数，中间某时候就已经终止循环了，i不可能加到val 
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
	   	 if (val%i == 0)      //如果是素数，那么 永远不可能val%i == 0，那么输出去时i就已经加到了val了 
	   	    break;     //如果不是素数，中间某时候就已经终止循环了，i不可能加到val 
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
		 printf("请输入您需要判断的数字："); 
		   scanf("%d",&m);
		
		if(is_prime(m))   //判断是否是true      
		                  //先判断is_prime是否是函数名，判断是函数名后把m的值发送给val  执行上面is_prime函数内的代码 
		   printf("YES!\n");
		else
		   printf("NO!\n");
     }while(1);
	
	return 0;
}

