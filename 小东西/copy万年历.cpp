/*
2015年5月8日21:07:15
万年历 
1. 平年365天（52周+1天），闰年366天（52周+2天）。平年2月28天，闰年2月29天。
   由于公元1月1日设为星期六，故3月1日为星期三。       ——注意这个“三”
   为使算法达到最简，故本算法以“星期”为计算单位。且选3月1日为基月。
2. 每400年整一闰，或每4年且不为百年的一闰。
(原因：地球绕太阳一周的时间是365天5小时46秒，为了使一年的天数为整数，
将一年的天数定为365天，余下的时间积累起来，四年就是23小时15分4秒，将近一天，
把这一天加在某年的二月而成29天，该年称为闰年，其它年称为平年。但四年加一天又多用了44分56秒，
这个数积满400年为三天。因此400年中只能有97个闰年，所以凡能被400整除，
或不能被100整除但能被4整除的年份为闰年。)
   所以百年%4=0闰或（年%4=0并且年<>0）闰。
3.  每 4年（3个平年+1个闰年）共208周+5天         ——注意这个“5天”
   每百年共100*（208周+5天）-1天=5217周+5天        ——注意这个“5天”(整百年暂设为平年)
   每400年共4*（5217周+5天）+1天（整400年闰）=20871周+0天——注意这个“0天”和“1天”
   (4个整百年只有一个闰年)
   即400年一轮回！（原来万年历400年前是一家）
至于你说的日期和星期对齐，给你一点思路参考：每一行是7天，可以设定每一天占10个字符（
同时上面的星期也得占满10个字符），假设本月第一天是星期4，那么在输出1之前需要先输出
10×3个字符来占位，当输出星期天的日期之后换行，之后的就简单了
*/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(void)
{
	int x,i=0,d=0,year=0,month=0,day=0,week,dy,m2,dm;
	char WEEK[9]; 
	char date[20];
	printf("请输入年月日\n     (eg:2015.12.12   2015/12/12)\n");
	gets(date);
	x = strlen(date);
	if(x==1)
	{
		printf("输入有误哦!\n退出....\n");
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
		if((date[i]=='/' || date[i]=='.') && d==-1)   //d=-1,则前面是月 
		{
			d=1; 
			i++;
			continue;
		}
		if(d==0)    //d==0,表示前面是年 
			year = year*10 + (date[i]-'0');   //减'0'是从字符串转化为数字 
		else if(d==-1)  //d==-1,表示前面是月 
		    month = month*10 +(date[i]-'0');
		else if(d==1)   //d==1,表示后面是日 
		    day = day*10 + (date[i]-'0');
		i++;
	}
	
	if(month<=0 || month>12)
	{
		printf("输入有误啦! 亲\n");
		exit(0); 
	} 
	printf("您输入的年月日为:%d %d %d \n",year,month,day);
	if (year>2000)
	   d=(year-1-2000)/4-(year-1-2000)/100+(year-1-2000)/400+1;
   else 
	   d=(year-2000)/4-(year-2000)/100+(year-2000)/400;
   dy=(year-2000)+d;     //该年 1月1号 到2000年1月1号的 " 星期差 "
   
   if((year%4==0 && year%100!=0)||(year%100==0 && year%400==0))
       m2=1; 
   else 
	   m2=0;  // 该年是否润 
la_100:                    //la_100下面的语句不管有没有执行goto语句下面的代码都会执行 
          // 该月以前的月所引起的 " 星期差 " 
   switch (month)
    {
     case 1: dm=0; month=31; break;       // month 在此存放该月天数 
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
   if (day>0)       //判定查看类型 
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
