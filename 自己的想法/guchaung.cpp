# include <stdio.h>

void div(void)
{
	float x,y;
	float div;
	printf("�����������������ÿո����\n");
	scanf("%f %f",&x,&y);
	div=x/y;
	printf("����������֮��Ϊ%f\n",div);
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
	   
	  printf("�����(GO/STOP)");
	  scanf(" %c",&j);
    }while("GO"==j);*/
	
	return 0;
}
