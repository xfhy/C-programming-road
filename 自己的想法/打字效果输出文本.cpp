/*
2015��6��17��13:18:12
��ӡ������� 
*/
# include <stdio.h>
# include <string.h> 
# include <Windows.h>

//gotoxy����  ,Ҫ����ͷ�ļ�<Windows.h>
void gotoxy(int x, int y) //��λ����y�еĵ�x��
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
	printf("��������Ҫ��ӡ����:\n");
	gets(s);    //��������ַ����ŵ�s������ 
	len = strlen(s);
	system("cls");
	for(int i=0; i<len; i++)
	{
		gotoxy(x,15);        //�����ָ��λ�� 
		printf("%c",s[i]);    //��s�����ÿһ���ַ���� 
		x++;                   //���ÿһ���ַ������仯x������ 
		Sleep(350);            //�ӳ�350΢���ټ��� 
	}
	
	return 0; 
} 
