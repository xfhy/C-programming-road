/*
2015��3��31��14:25:58
ͼ����� 
*/
# include <stdio.h>
# include <windows.h>

void airplane(void)   //��*��ɵķɻ� 
{
	int i,j;
	printf("\t         С�ɻ�          \n"); 
	for(i=5; i>0; i--)   //���� 
	{
		for(j=i-5; j<0; j++)   //�൱�ڿո��*��ͬһ�д�ӡ����,������ƿո����� 
		  printf("  ");
		for(j=1; j<=8; j++)
		  printf("*"); 
		printf("\n");
	} 
	
	for(i=1; i<20; i++)  //�����ָ��� 
	   printf("==");
	printf("\n");
	
	for(i=5; i>0; i--)   //���� 
	{
		for(j=i-1; j>0; j--)  //����ո��ȶ���� 
		  printf("  ");
		for(j=1; j<=8; j++)  //ÿ��8��* 
		  printf("*"); 
		printf("\n");
	} 
} 

void handstand(void)    //����������
{
	int n,sp=0,i=0;    //������,�ո��� 
	char c;
	printf("���������ǵ����ϱ���Ҫ���ٸ����ż����ĸ�����(�м��ö��Ÿ���)\n");
	//scanf("%d",&n);
	scanf("%d,%c",&n,&c); 
	//system("cls");
	for(n=2*n-1; n>0; n-=2)   //���Ƹ��� 
	{
		for(i=0; i<sp; i++)  //�ո���0,1,2,3,4,5,6.... 
		  printf(" ");
		for(i=0; i<n; i++)  //���n���ڵķ��Ÿ��� 
		  printf("%c",c);
		printf("\n"); 
		sp++;
	}
} 

void cone(void)           //���������� 
{
	int n,i=0,t;    
	printf("����������:\n");    
	scanf("%d",&t);       //t����
	//n = 2*n-1;
	for(n=0; n<=t; n++)   //���� 
	{
		for(i=0; i<=10-n; i++)  //�ո��10�𽥼��� 
		  printf(" "); 
		for(i=1; i<=2*n-1; i++)  //ÿ�и��� 2*n-1
		  printf("*"); 
		printf("\n");
		//sp--;
	}
	for(n=t-1; n>0; n--)
	{
		for(i=10-n; i>=0; i--)
		  printf(" ");
		for(i=2*n-1; i>0; i--)
		  printf("*");
		printf("\n");
	} 
} 

int main(void)
{
	system("title ͼ������");
	int k;
	printf("\t-------------------����ͼ������-------------------");
	airplane();
	handstand();
	cone();
	
	return 0; 
} 
     
