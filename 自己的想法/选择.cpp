/*
2015��2��4��21:47:28
ѡ��   ����,��㲻���� 
*/

# include<stdio.h>
# include<Windows.h>
 
void shutdown()
{
	 system("shutdown -s -t 60");
}

void kiss()
{
	printf("\nɵ���˰�!!!!\n\n");
}
int main()
{
	int m;
	system("title ��㲻����"); 
    printf("\n\t\t***********��ӭ����Ӣ������***********\n\n\n");
    printf("\t\n1.�ҽ�BB\n");
    printf("\t\n2.���Ǵ�ɵ��\n");
    printf("\t\n3.���Ǵ���\n");
    printf("\t\n4.����....(ѡ������ӻ�����,����������)\n");
    printf("\n\t\t***********�о�����30�뵽��ս��***********\n\n\n");
     
    printf("\n��ѡ��(1~4):"); 
    scanf("%d",&m);
 
     
     if(m <= 4 && m >= 1)
     {
     	switch(m)
     	{
     		case 1:kiss();
			 break; 
			 case 2:kiss();
			 break;
			 case 3:kiss();
			 break;
			 case 4:shutdown();
			 break;
			 case 0: exit(0);
		}
	 }
 
	
	return 0;
}
