/*
2015��2��7��09:46:34
˳����� 
*/
# include <stdio.h>

int main(void)
{
	int a[5] = {1,2,3,4,5};
    int i;
    int j;
    char ch; 
    
	printf("���ԭ����:\n");
	for(j=0; j<5; j++)
        printf("%d\t",a[j]);
    printf("\n");
     
	 do
	 {   
		printf("��������Ҫ�������в��ҵ�Ԫ��:");
		scanf("%d",&i);	
		for(j=0; j<5; j++)
		{
			if(a[j]==i)	 
				break;
		} 
		 if(j<5)
		    printf("�ҵ���,���������е��±���%d \n",j);
		 else
		    printf("��������û���ҵ�����Ҫ��Ԫ��!\n"); 
		 printf("���������?(Y/N)");
		 scanf(" %c",&ch);   //%cǰ���пո� 
	}while('y'==ch||'Y'==ch);
	return 0;
} 
