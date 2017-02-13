/*
2015年3月8日10:45:52
模拟洗牌 
*/
# include <stdio.h>
# include <time.h>   //随机函数的声明,而且必须要<stdlib.h> 
# include <stdlib.h>
 
struct card
{
	char suit;       //花色 红桃,方块,梅花,黑桃的ASCII码为3,4,5,6 
	int pips;         //点数 
};
typedef struct card card;    //定义别名 

/*-------------调换顺序-------------*/
void shuffle(card * deck,int n) 
{
	int i,j;
	card t;     //待会拿来做临时变量的,所以应该是struct card类型 
	srand(time(0));
	for(i=0; i<n; i++)
	{
		j = rand()%n;       //j是随机选的一张牌,待会儿拿来调的
		t = deck[i];
		deck[i] = deck[j];
		deck[j] = t; 
	} 
	 
}

/*--------------输出函数-------------*/

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
		deck[i].suit = i/13 + 3;   //赋花色的ASCII码
		deck[i].pips = i%13 +1;   //赋点数,i从0开始的 
	} 
	printf("这是洗牌前:\n");
	display(deck,52);
	shuffle(deck,52);
	printf("洗牌后:\n");
	display(deck,52);
	return 0;
} 
