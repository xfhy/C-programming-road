/*
2015��4��13��7:46:52
[��6-12]��������ѧ��,����ѧ����,Ҫ���ѯ��ѧ���Ƿ����ڸð�,�����Ӧ����Ϣ 
*/
# include <stdio.h>
# include <string.h> 

int main(void)
{
	char hehe[4][10] = {"wang","li","guo","zhang"};
	int flag,i;
	char name[10];
	printf("Enter your name:\n");
	gets(name);         //�Ӽ��̵õ�һ���ַ���,��ֵ��name 
	for(i=0; i<4; i++)  //�ӵ�һ��Ԫ�ؿ�ʼ,������������бȽ� 
		if(strcmp(name,hehe[i])==0)   //��������strcmp()����ֵΪ0 
		  flag = 1;
	if(flag==1)
	  printf("%s is in our class!\n",name);
	else
	  printf("%s is not in our class\n",name);
	
	return 0; 
} 
