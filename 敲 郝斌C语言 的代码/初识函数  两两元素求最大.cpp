/*
2015��1��27��20:33:26
����
������Ԫ��֮�� 
*/
# include <stdio.h>
     //maxֻ�Ǻ��������֣�i��j���β� 
void max(int i,int j)//����main����֮ǰ������   �Ƚ�����˭�� 
{
	if(i>j)
	printf("%d\n",i);
	else
	printf("%d\n",j);
} 

int main(void)//����ִ�е���main���� 
{
   int a,b,c,d,e,f;
   a=14;
   b=54;
   c=543;
   d=45;
   e=34;
   f=35;
   
   max(a,b);//���������max�ں���ȥִ��  a��ֵ���͸�i,b��ֵ���͸�j;ʹ����һ��֮�󣬸�i,j����Ŀռ�ᱻ�ͷŵ� 
   max(c,d);
   max(e,f);

   return 0;
}

