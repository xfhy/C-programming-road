/*
2015��2��8��20:08:20
�����Լ�i++,++i 
*/
#include<stdio.h>
/*
����i��D�Di��ָ��ʹ��i֮ǰ���Ȱ�i��ֵ��1���1��
i������i�D�D����ָ��ʹ��i֮���ٰ�i��ֵ��1���1��
*/
int main(void)
{ 
   /*
	int i=3; 
	 
	int j=i++;
	printf("%d,%d\n",i,j);   //4,3
	
	i = 3;
	j=++i;  
	printf("%d,%d\n",i,j);    //4,4
	
	i = 3;
	j=i--;
	printf("%d,%d\n",i,j);    //2,3
	
	i = 3;
	j=--i;
	printf("%d,%d\n",i,j);    //2,2
	*/
    
   int i=3;   
    
    int j=i++;   //��ֵ֮��i���� 
    printf("%d,%d\n",i,j);  //4,3    i�Ѿ���4��,j�Ѿ���3��,���沢û�����¸�ֵ ,��������������ֵ�� 
    
    j=++i;     //i����֮��Ÿ�ֵ 
    printf("%d,%d\n",i,j);   //5,5
    
	j=i--;     //��ֵ��֮��i�ż� 
    printf("%d,%d\n",i,j);   //4,5
    
    j=--i;     //i����֮��Ÿ�ֵ 
    printf("%d,%d\n",i,j);   //3,3
    
    return 0; 
}

