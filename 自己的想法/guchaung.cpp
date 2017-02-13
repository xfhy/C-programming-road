# include <stdio.h>

void div(void)
{
	float x,y;
	float div;
	printf("请输入两个数，并用空格隔开\n");
	scanf("%f %f",&x,&y);
	div=x/y;
	printf("所求两个数之商为%f\n",div);
}

int main(void)
{
	int i,j;
	char k;
	scanf("%d",&i);
	if(i==4)
	   div();
	/*
	do
	{
	  scanf("%d %d",&i,&j);
	  printf("%d %d",i,j);
	   
	  printf("想继续(GO/STOP)");
	  scanf(" %c",&j);
    }while("GO"==j);*/
	
	return 0;
}
