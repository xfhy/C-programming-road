/*
2015��2��9��06:57:55
���~����
���Ƽ����� 
*/

# include <stdio.h>
# include <Windows.h>
# include <math.h>    //��ѧ���� ���� 
# include <time.h> 

void add(void)   //�ӷ����� 
{
	float i,j; 
	float sum;
	printf("���������������ӵ�������(�м��ö��Ÿ���)\n");
	scanf("%f,%f",&i,&j); 
	sum = i + j;
	printf("%f + %f = %f \n",i,j,sum); 
}

void subtrac(void)   //�������� 
{
	float i, j, diff;  //diff:�� 
	printf("�����뱻�����ͼ���(�м��ö��Ÿ���)\n"); 
	scanf("%f,%f",&i,&j);
	diff = i - j;
	printf("%f - %f = %f",i,j,diff);
}

void mul(void)       //�˷����� 
{
	float i, j, accu;   //accu:��
	printf("�����뱻�����ͳ���(�м��ö��Ÿ���)\n"); 
	scanf("%f,%f",&i,&j);
	accu = i * j;
	printf("%f * %f = %f",i,j,accu);
}

void division(void)   //�������� 
{
	float i, j, trade;   //trade:��
	printf("�����뱻���������(�м��ö��Ÿ���)\n");
	scanf("%f,%f",&i,&j);
	trade = i/j;
	printf("%f / %f = %f",i,j,trade); 
}

void  sqr(void)   //��ƽ������ 
{
	float i, result;
	printf("���������뿪ƽ�����Ǹ���\n");
	scanf("%f",&i); 
	result = sqrt(i);
	printf("%f��ƽ�� = %f",i,result);
} 

void sin1(void)   //sin���� 

{
    float x;
    float k;
    printf("������M_PI/N(��/N) :\n");
    printf("eg:��/ 2 = 90��\n");
    printf("N = ");
    scanf("%f",&k);
    x=M_PI/k;
    printf("sin(PI/N)=%f",sin(x));
}

void cos1(void)   //cos����
{
    double x;
    double k;
    printf("������M_PI/N(��/N) :\n");
    printf("eg:��/ 2 = 90��\n");
    printf("N = ");
    scanf("%lf",&k);
    x=M_PI/k;
    printf("cos(PI/N)=%lf",cos(x));
} 

void tan1(void)  //tan���� 
{
	float x;
    float k;
    printf("������M_PI/N(��/N) :\n");
    printf("tan(��/2)������\n");
    printf("eg:��/ 2 = 90��\n");
    printf("N = ");
    scanf("%f",&k);
    x=M_PI/k;
    printf("tan(PI/N)=%f",tan(x));
}

void cot1(void)
{
	float x;
    float k;
    printf("������M_PI/N(��/N) :\n");
    printf("tan(��/2)������\n");
    printf("eg:��/ 2 = 90��\n");
    printf("N = ");
    scanf("%f",&k);
    x=M_PI/k;
    printf("cot(PI/N)=%f",1/(tan(x)));
}
 
void function(void)   //���Ǻ������� 
{
	float i, result;
	int m;
	printf("\n\t ***********��ӭ�����ǵش�************\n\n");
	printf("\t 9.sin�������� \n");
	printf("\t 10.cos�������� \n");
	printf("\t 11.tan�������� \n");
	printf("\t 12.cot�������� \n");
	printf("\n\t��ѡ��������е�����(9~12):"); 
	scanf("%d",&m);
	if(m<=12 && m>=9) 
	{
	   switch(m)
	   {
	   	 case 9: 
			sin1();   //����sin1���� 
	   	    break;
	   	case 10: 
			cos1();   //����cos1���� 
	   	    break;
	   	case 11:
	   		tan1();   //����tan1���� 
	   		break;
	   	case 12:
	   		cot1();   //����cot1���� 
	   		break;
	   }
    }
}

void index(void)    //ָ������ 
{
	double x,y;
	printf("���������:\n");
	scanf("%lf",&x); 
	printf("������ڤ:\n");
	scanf("%lf",&y); 
    printf("%lf��%lf�η� = %lf\n", x, y, pow(x, y));
} 

void log1(void)   //�������� 
{
   double result;
   double x;
   printf("������ֻ������10Ϊ�׵Ķ���,�ɴ˸��������Ĳ������½�,���ǻ����Ŭ��,���ڴ���һ�θ���\n");
   printf("����������(�S10(N)  ����NΪ����):\n");
   scanf("%lf",&x);
   result = log10(x); 
   printf("��10Ϊ��,%lfΪ�����Ķ���=%lf", x, result); 
}

int main(void)
{
	int m,k;
	char ch;   //���������洢�û�������Ǹ��ַ� 
	system("title ��纮�µļ�����");    //�������
	system("color 0B"); 
	 
	/*----------��������----------*/ 
	printf("\n\t***************��ӭ������纮�����Ƽ�����****************\n\n");
	printf("\t 1.�ӷ� \n");
	printf("\t 2.���� \n");
	printf("\t 3.�˷� \n");
	printf("\t 4.���� \n"); 
	printf("\t 5.��ƽ�� \n");
	printf("\t 6.���Ǻ��� \n");
	printf("\t 7.�������� \n"); 
	printf("\t 8.ָ������ \n");
	printf("\n\t***************���ϵĽ��治һ��������****************\n\n");
	
	do
	{
		printf("\n\t��ѡ��������е�����(1~8):");  //��ʾ�û�����ѡ�� 
		scanf("%d",&m);
		if(m<=8 && m>=1)   //����û�����1~8,��ִ������Ĵ��� 
		{
				switch(m)
				{
					case 1:
						add();        //���üӷ����� 
						break;        //ʹ���꺯��,�ǵ���ֹswitch 
				    case 2:
				    	subtrac();    //���ü������� 
				    	break;
				    case 3:
				    	mul();        //���ó˷����� 
				    	break;
				    case 4:
				    	division();   //���ó������� 
				    	break;
				    case 5:
				    	sqr();        //���ÿ�ƽ������ 
				    	break;
				    case 6:
				    	function();   //�������Ǻ��� 
				    	break;
				    case 7:             
				    	log1();       //���ö�������
				    	break;
				    case 8:           
					    index();      //����ָ������ 
						break; 
				}
		}
		else   //����û�û��Ҫ������,�Ǻ�,���һ�� 
		{
			printf("\nû������������ѡ��,�Ǻ�,���������60���ڹػ�,sorry~~~ ^-^\n"); 
			system("shutdown -s -t 60");  //60���ڹػ� 
		}
	printf("\n�������ʹ�������������(Y/N):");  //��ʾ�û�:������ 
	scanf(" %c",&ch);              //��¼�û������������ֵ 
	}while('y'==ch||'Y'==ch);      //�ж��û�������Ƿ�ΪY,����Ǽ���ִ��do ...  whileѭ��,�������,������ѭ�� 
	
	return 0; 
} 
