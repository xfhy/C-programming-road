/*
2015��4��7��13:00:21
6.4.2 �ַ������������� 
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
    char str[4];   //ֻ�ܴ���3���ַ�,���һ��������Ϊ������'\0' 
	int i; 
	char bb[] = "abcdefg";
	//for(i=0; i<3; i++)  //�ַ������������뷽�� 
	   //scanf("%c",&str[i]);    //�ǵ�&            
	   //str[i]=getchar();     //ֱ�ӴӼ���ȡ��ֵ 
	  // gets(str);
	//for(i=0; i<3; i++)
	   //printf("%c  ",str[i]); 
	   //putchar(str[i]);     //���
	//puts(bb);             //�����ʱ,������һ���ַ���������'\0'��ֹͣ������Զ����� 
	
	/*----------�ַ��������������------------*/ 
	//char sb[6];
	//scanf("%s",sb); 
	//printf("%s",sb); 
	
	/*puts������ַ����п��԰���ת���ַ�,����ʵ��ĳЩ��ʽ�Ŀ���---*/
	//char dd[]=" shanghai \n hangzhou";
	//puts(dd); 
	
	/*--�ַ�������strlen()---*/
	//char ff[]="strlen";
	//printf("%d %d\n",strlen("strlen"),strlen(ff));
	
	/*--�ַ������Ӻ���strcat(�ַ�����1,�ַ�����2),������2���ӵ�1�ĺ���---*/
	/*char gg[10] = {"I am"};  ����1�ĳ���Ӧ���㹻��,�Ա����������ַ�����2 
	char hh[] = {" guoliang"};
	printf("%s ",strcat(gg,hh)); */
	
	/*---�ַ������ƺ���strcpy(����1,����2)----*/
	/*char jj[15] = "guchaung";  ע��:��ʹ����1ԭ�����ַ�,ҲҪ�����ǵ� 
	char kk[12] = " is bb";
	strcpy(jj,kk);
	printf("%s \n",jj);*/
	
	/*----�ַ����ȽϺ���strcmp(�ַ���1,�ַ���2)----
	����ַ���1=�ַ���2,����ֵΪ0          �������ַ���������������ַ����бȽ�,��ascii��ֵ���бȽ� 
	����ַ���1>�ַ���2,����ֵΪһ����     ֱ�����ֲ�ͬ�ַ�������'\0'Ϊֹ 
	����ַ���1<�ַ���2,����ֵΪһ���� */
	char kk[10] = {"am am"};
	char temp[10] = {"am am "};
	printf("%d\n",strcmp(kk,temp));
		
	return 0; 
} 
