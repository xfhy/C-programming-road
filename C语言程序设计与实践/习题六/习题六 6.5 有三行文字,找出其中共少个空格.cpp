/*
2015��4��17��16:57:49
ϰ���� 6.5 ����������,�ҳ����й��ٸ��ո�,���ٸ�����.�涨���ʼ���һ�������ո�
��� ....
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char a[3][100] = {" fsa dfga dsg sags",    //�����ά�ַ����� 
	                  " ga gsa ga sdgas",
					  " gdfs       ewg  gw  hew"
					 };
	int i,sum=0,len=0;
	char c;
	printf("ԭ��ά����Ϊ:\n");
	for(i=0; i<3; i++)
	{
	  printf("%s\n",a[i]);         //���ÿһ�е��ַ� 
	  len = len + strlen(*(a+i));  //��ÿһ�е��ַ����������� 
    }
    int j=0;
    for(i=0; i<3; i++)   //������ 
    {
    	for(j=0; j<strlen(*(a+i)); j++)   //������,ÿһ�еĳ���Ϊstrlen(*(a+i))
    	{
    		c = a[i][j];   //��a�������ÿһ��Ԫ�ض���ֵ���ַ�c 
    		if(c==' ')     //��c����һһ�ж� 
    		  sum++;        //����ǿո����¼����һ�� 
		}
	}
    printf("\n������ַ�������%d���ո�\n",sum);
	
	return 0;
} 
