/*
2015年6月17日13:18:12
打印输入的字 
*/
# include <stdio.h>
# include <string.h> 
# include <Windows.h>

//gotoxy函数  ,要声明头文件<Windows.h>
void gotoxy(int x, int y) //定位到第y行的第x列
{
    int xx=0x0b;
    HANDLE hOutput;
    COORD loc;
    loc.X = x;
    loc.Y=y;
    hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOutput, loc);
    return;
}

int main(void)
{
	char s[50]; 
	int len,x=15;
	printf("请输入需要打印的字:\n");
	gets(s);    //将输入的字符串放到s数组里 
	len = strlen(s);
	system("cls");
	for(int i=0; i<len; i++)
	{
		gotoxy(x,15);        //输出到指定位置 
		printf("%c",s[i]);    //将s数组的每一个字符输出 
		x++;                   //输出每一个字符都将变化x的坐标 
		Sleep(350);            //延迟350微秒再继续 
	}
	
	return 0; 
} 
