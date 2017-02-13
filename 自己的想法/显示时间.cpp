/*
2015年2月9日11:15:12
计算系统时间 
*/

# include <stdio.h>
# include <time.h>
# include <Windows.h> 

void time1(void)
{
	time_t time_s;
	 struct tm *date_time;
	 char ch;
	 
	 do
	 {
	 	Sleep(1000);
	 	time(&time_s);
	 	
	 	date_time=localtime(&time_s);
	 	
	 	COORD RD={0,0};
	 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),RD);
	 	printf("\n\t\t%d/%02d/%02d/%02d:%02d:%02d",date_time->tm_year+1900,
		 date_time->tm_mon+1,date_time->tm_mday,date_time->tm_hour,
		 date_time->tm_min,date_time->tm_sec);
	 printf("\n你想继续同步时间吗(Y/N):");  //提示用户:继续否 
	scanf(" %c",&ch);              //记录用户键盘上输入的值 
	}while('y'==ch||'Y'==ch); 

} 

int main(void)
{
	  time1();

	
	return 0;
} 
