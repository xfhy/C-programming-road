/*
2015��5��8��21:07:15
������ 
1. ƽ��365�죨52��+1�죩������366�죨52��+2�죩��ƽ��2��28�죬����2��29�졣
   ���ڹ�Ԫ1��1����Ϊ����������3��1��Ϊ��������       ����ע�����������
   Ϊʹ�㷨�ﵽ��򣬹ʱ��㷨�ԡ����ڡ�Ϊ���㵥λ����ѡ3��1��Ϊ���¡�
2. ÿ400����һ�򣬻�ÿ4���Ҳ�Ϊ�����һ��
(ԭ�򣺵�����̫��һ�ܵ�ʱ����365��5Сʱ46�룬Ϊ��ʹһ�������Ϊ������
��һ���������Ϊ365�죬���µ�ʱ������������������23Сʱ15��4�룬����һ�죬
����һ�����ĳ��Ķ��¶���29�죬�����Ϊ���꣬�������Ϊƽ�ꡣ�������һ���ֶ�����44��56�룬
���������400��Ϊ���졣���400����ֻ����97�����꣬���Է��ܱ�400������
���ܱ�100�������ܱ�4���������Ϊ���ꡣ)
   ���԰���%4=0�����%4=0������<>0����
3.  ÿ 4�꣨3��ƽ��+1�����꣩��208��+5��         ����ע�������5�족
   ÿ���깲100*��208��+5�죩-1��=5217��+5��        ����ע�������5�족(����������Ϊƽ��)
   ÿ400�깲4*��5217��+5�죩+1�죨��400����=20871��+0�졪��ע�������0�족�͡�1�족
   (4��������ֻ��һ������)
   ��400��һ�ֻأ���ԭ��������400��ǰ��һ�ң�
������˵�����ں����ڶ��룬����һ��˼·�ο���ÿһ����7�죬�����趨ÿһ��ռ10���ַ���
ͬʱ���������Ҳ��ռ��10���ַ��������豾�µ�һ��������4����ô�����1֮ǰ��Ҫ�����
10��3���ַ���ռλ������������������֮���У�֮��ľͼ���
*/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(void)
{
	int x,i=0,d=0,year=0,month=0,day=0,week,dy,m2,dm;
	char WEEK[9]; 
	char date[20];
	printf("������������\n     (eg:2015.12.12   2015/12/12)\n");
	gets(date);
	x = strlen(date);
	if(x==1)
	{
		printf("��������Ŷ!\n�˳�....\n");
		exit(0);
	}
	while(date[i])
	{
		if((date[i]=='/' || date[i]=='.') && d==0)
		{
			d=-1; 
			i++;
			continue;
		}
		if((date[i]=='/' || date[i]=='.') && d==-1)   //d=-1,��ǰ������ 
		{
			d=1; 
			i++;
			continue;
		}
		if(d==0)    //d==0,��ʾǰ������ 
			year = year*10 + (date[i]-'0');   //��'0'�Ǵ��ַ���ת��Ϊ���� 
		else if(d==-1)  //d==-1,��ʾǰ������ 
		    month = month*10 +(date[i]-'0');
		else if(d==1)   //d==1,��ʾ�������� 
		    day = day*10 + (date[i]-'0');
		i++;
	}
	
	if(month<=0 || month>12)
	{
		printf("����������! ��\n");
		exit(0); 
	} 
	printf("�������������Ϊ:%d %d %d \n",year,month,day);
	if (year>2000)
	   d=(year-1-2000)/4-(year-1-2000)/100+(year-1-2000)/400+1;
   else 
	   d=(year-2000)/4-(year-2000)/100+(year-2000)/400;
   dy=(year-2000)+d;     //���� 1��1�� ��2000��1��1�ŵ� " ���ڲ� "
   
   if((year%4==0 && year%100!=0)||(year%100==0 && year%400==0))
       m2=1; 
   else 
	   m2=0;  // �����Ƿ��� 
la_100:                    //la_100�������䲻����û��ִ��goto�������Ĵ��붼��ִ�� 
          // ������ǰ����������� " ���ڲ� " 
   switch (month)
    {
     case 1: dm=0; month=31; break;       // month �ڴ˴�Ÿ������� 
     case 2: dm=3; month=d==1? 29:28; break;
     case 3: dm=3+m2; month=31; break;
     case 4: dm=6+m2; month=30; break;
     case 5: dm=1+m2; month=31; break;
     case 6: dm=4+m2; month=30; break;
     case 7: dm=6+m2; month=31; break;
     case 8: dm=2+m2; month=31; break;
     case 9: dm=5+m2; month=30; break;
     case 10: dm=m2; month=31; break;
     case 11: dm=3+m2; month=30; break;
     case 12: dm=5+m2; month=31; break;
    }
    
   if (day<0||day>month)
    { 
	   printf ("\n ERROR! the entered DAY is invalid\n"); 
	   exit (0);
   }
   week=(dy+dm+day-1+6)%7;
   if(week<0)
	   week+=7;
   if (day>0)       //�ж��鿴���� 
   {
	     switch (week)
	    {
	       case 0: strcpy (WEEK,"SUNDAY"); break;
	       case 1: strcpy (WEEK,"MONDAY"); break;
	       case 2: strcpy (WEEK,"TUESDAY"); break;
	       case 3: strcpy (WEEK,"WEDNESDAY"); break;
	       case 4: strcpy (WEEK,"THURSDAY"); break;
	       case 5: strcpy (WEEK,"FRIDAY"); break;
	       case 6: strcpy (WEEK,"SATURDAY"); break;
	    }
	     printf ("\n this day is %s  \( %d \)\n\n OK!\n",WEEK,week);
  }
   else
   {
	     week=++week%7;
	     printf ("\n the calender of this month as following\n");
	     printf ("\n *********************************\n");
	     printf (" SUN  MON  TUE  WEN  THU  FRI  STA\n");
	     for (i=0;i<week;i++) 
			 printf ("     ");
	     for (i=1;i<=month;i++)
	     {
			 printf (" %2d  ",i);
			 week++;
			 if (week%7==0 && i!=month) 
				 printf ("\n");
		 }
	     printf ("\n *********************************\n");
	     printf ("\n OK!\n");
   }
} 
