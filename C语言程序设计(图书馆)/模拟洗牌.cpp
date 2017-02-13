/*
2015��3��8��10:45:52
ģ��ϴ�� 
*/
# include <stdio.h>
# include <time.h>   //�������������,���ұ���Ҫ<stdlib.h> 
# include <stdlib.h>
 
struct card
{
	char suit;       //��ɫ ����,����,÷��,���ҵ�ASCII��Ϊ3,4,5,6 
	int pips;         //���� 
};
typedef struct card card;    //������� 

/*-------------����˳��-------------*/
void shuffle(card * deck,int n) 
{
	int i,j;
	card t;     //������������ʱ������,����Ӧ����struct card���� 
	srand(time(0));
	for(i=0; i<n; i++)
	{
		j = rand()%n;       //j�����ѡ��һ����,�������������
		t = deck[i];
		deck[i] = deck[j];
		deck[j] = t; 
	} 
	 
}

/*--------------�������-------------*/

void display(card * deck,int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%c%-2d ",deck[i].suit,deck[i].pips);
		if((i+1)%13==0)
		  printf("\n");
	} 
}
 
int main(void)
{
	int i;
	card deck[52];
	for(i=0; i<52; i++)
	{
		deck[i].suit = i/13 + 3;   //����ɫ��ASCII��
		deck[i].pips = i%13 +1;   //������,i��0��ʼ�� 
	} 
	printf("����ϴ��ǰ:\n");
	display(deck,52);
	shuffle(deck,52);
	printf("ϴ�ƺ�:\n");
	display(deck,52);
	return 0;
} 
