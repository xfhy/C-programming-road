/*
2015��2��9��11:15:12
����ϵͳʱ�� 
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
	 printf("\n�������ͬ��ʱ����(Y/N):");  //��ʾ�û�:������ 
	scanf(" %c",&ch);              //��¼�û������������ֵ 
	}while('y'==ch||'Y'==ch); 

} 

int main(void)
{
	  time1();

	
	return 0;
} 
