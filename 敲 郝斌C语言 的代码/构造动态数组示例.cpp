/*
2015��1��30��21:26:07 
���춯̬���� 
*/
# include<stdio.h>
# include<malloc.h>

int main(void)
{
	int a[5] = {1,2,3,4,5}; //��̬���� 4*5=20���ֽ� ÿ4���ֽڱ�����һ��int������ʹ�� 
	
	int len;
	do
	{
			printf("���������빹���һά���鳤�ȣ�");
			scanf("%d",&len);
			
			int * p = (int *)malloc(4*len);  //���ж�̬�ع�����һ��һά����    
			                                //������ĳ�����len,��������p;
											//�������ÿ��Ԫ�ض���int����  ������ int p[len]; 
			
			int i;
			
			printf("���������빻���һά��������ݣ����м��ÿո������");
			for(i = 0;i < len;i++) 
			  scanf("%d",&p[i]);
			 
			printf("���������һά�������£�\n"); 
			for(i = 0;i < len;i++)
			     printf("%d  ",p[i]);
			 
			printf("\n");
    }while(1);
	
  return 0;
} 
