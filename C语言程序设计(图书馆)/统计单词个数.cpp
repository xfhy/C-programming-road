/*
2015��2��20��08:34:55
ͳ�Ƶ��ʸ��� 
����֮��ķָ��ǿո��,�Ի��з����� 
*/
# include <stdio.h>

int main(void)
{
	char ch;
	int flag = 0,count = 0;
	printf("������һ������:");
    ch=getchar();    //�ȼ���scanf("%c",&ch);   ��ȡ��һ������ 
    while(ch!='\n')
    {
    	if(flag==0 && ch!=32)    //32�ǿո�Ĵ���   ��������һ������ʱflag�ǵ���0��,��flag��Ϊ1
		                         //ֱ�������ո� 
    	   flag = 1;
    	else if(flag==1 && ch==32)   //��������ո�,��flag��Ϊ0;count+1; 
    	{
    		count++;
    		flag=0;
		}
		ch=getchar();    //��������һ������ 
	}
	if(flag==1)       //������\n ,Ҳ����ǰ�������һ������,count+1 
	  count++;
	printf("һ����%d������\n",count);
	
	return 0;
} 
