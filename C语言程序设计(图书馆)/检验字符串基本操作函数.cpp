/*
2015��2��28��22:39:29
�����ַ��������������� 
*/

# include <stdio.h>
# include <string.h>     //�����Զ�����ַ������������������� 

int main(void)
{
   char * ap1 = "work";	   //���ַ�ָ���ʼ�� 
   char ap2[10] = "hard";  //���ַ������ʼ�� 
   char ap3[10];           
   printf("%d\n",strlen(ap1));   //���ַ���ap1�ĳ� 
   
   printf("%s\n",strcpy(ap3,ap2));   //strcpy(ap3,ap2); printf("%s\n",ap3);   strcpy�Ǹ��ƺ���,��ap2���Ƹ�ap3
                                        //������ap3��ֵ 
                                        
   printf("%s\n",strupr(ap3));   //strupr:���ַ���Сд��ĸ�ĳɴ�д
    
   printf("%d\n",strcmp(ap2,ap1));    //�ַ����Ƚ�.
                                      //strcmp(c,c1):�ַ���c���ַ���c1����ַ����бȽ�,����ȫ���,�򷵻�ֵ��0;
									  //���������Ӧ���ַ�����,��ֹͣ�Ƚ�;�����ֵ����1,�ͷ���1,����ͷ���-1 
									  
	printf("%s\n",strcat(ap3,ap2));   //strcat(ap3,ap2):�ַ�������
	                                 // strcat(ap3,ap2);printf("ap3"); 
	                                 //��ap2�ӵ�ap3��β��,����ap3 
	return 0;
} 
