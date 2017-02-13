/*
2015年2月28日22:39:29
检验字符串基本操作函数 
*/

# include <stdio.h>
# include <string.h>     //包含自定义的字符串基本操作函数声明 

int main(void)
{
   char * ap1 = "work";	   //给字符指针初始化 
   char ap2[10] = "hard";  //给字符数组初始化 
   char ap3[10];           
   printf("%d\n",strlen(ap1));   //求字符串ap1的长 
   
   printf("%s\n",strcpy(ap3,ap2));   //strcpy(ap3,ap2); printf("%s\n",ap3);   strcpy是复制函数,将ap2复制给ap3
                                        //并返回ap3的值 
                                        
   printf("%s\n",strupr(ap3));   //strupr:将字符串小写字母改成大写
    
   printf("%d\n",strcmp(ap2,ap1));    //字符串比较.
                                      //strcmp(c,c1):字符串c和字符串c1逐个字符进行比较,若完全相等,则返回值是0;
									  //如果遇到对应的字符不等,就停止比较;如果差值大于1,就返回1,否则就返回-1 
									  
	printf("%s\n",strcat(ap3,ap2));   //strcat(ap3,ap2):字符串连接
	                                 // strcat(ap3,ap2);printf("ap3"); 
	                                 //将ap2接到ap3的尾部,返回ap3 
	return 0;
} 
