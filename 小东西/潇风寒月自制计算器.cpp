/*
2015年2月9日06:57:55
编程~郭亮
自制计算器 
*/

# include <stdio.h>
# include <Windows.h>
# include <math.h>    //数学函数 声明 
# include <time.h> 

void add(void)   //加法运算 
{
	float i,j; 
	float sum;
	printf("请输入你想进行相加的两个数(中间用逗号隔开)\n");
	scanf("%f,%f",&i,&j); 
	sum = i + j;
	printf("%f + %f = %f \n",i,j,sum); 
}

void subtrac(void)   //减法运算 
{
	float i, j, diff;  //diff:差 
	printf("请输入被减数和减数(中间用逗号隔开)\n"); 
	scanf("%f,%f",&i,&j);
	diff = i - j;
	printf("%f - %f = %f",i,j,diff);
}

void mul(void)       //乘法运算 
{
	float i, j, accu;   //accu:积
	printf("请输入被乘数和乘数(中间用逗号隔开)\n"); 
	scanf("%f,%f",&i,&j);
	accu = i * j;
	printf("%f * %f = %f",i,j,accu);
}

void division(void)   //除法运算 
{
	float i, j, trade;   //trade:差
	printf("请输入被除数与除数(中间用逗号隔开)\n");
	scanf("%f,%f",&i,&j);
	trade = i/j;
	printf("%f / %f = %f",i,j,trade); 
}

void  sqr(void)   //开平方运算 
{
	float i, result;
	printf("请输入你想开平方的那个数\n");
	scanf("%f",&i); 
	result = sqrt(i);
	printf("%f开平方 = %f",i,result);
} 

void sin1(void)   //sin运算 

{
    float x;
    float k;
    printf("请输入M_PI/N(∏/N) :\n");
    printf("eg:∏/ 2 = 90度\n");
    printf("N = ");
    scanf("%f",&k);
    x=M_PI/k;
    printf("sin(PI/N)=%f",sin(x));
}

void cos1(void)   //cos运算
{
    double x;
    double k;
    printf("请输入M_PI/N(∏/N) :\n");
    printf("eg:∏/ 2 = 90度\n");
    printf("N = ");
    scanf("%lf",&k);
    x=M_PI/k;
    printf("cos(PI/N)=%lf",cos(x));
} 

void tan1(void)  //tan运算 
{
	float x;
    float k;
    printf("请输入M_PI/N(∏/N) :\n");
    printf("tan(∏/2)不存在\n");
    printf("eg:∏/ 2 = 90度\n");
    printf("N = ");
    scanf("%f",&k);
    x=M_PI/k;
    printf("tan(PI/N)=%f",tan(x));
}

void cot1(void)
{
	float x;
    float k;
    printf("请输入M_PI/N(∏/N) :\n");
    printf("tan(∏/2)不存在\n");
    printf("eg:∏/ 2 = 90度\n");
    printf("N = ");
    scanf("%f",&k);
    x=M_PI/k;
    printf("cot(PI/N)=%f",1/(tan(x)));
}
 
void function(void)   //三角函数运算 
{
	float i, result;
	int m;
	printf("\n\t ***********欢迎来三角地带************\n\n");
	printf("\t 9.sin函数运算 \n");
	printf("\t 10.cos函数运算 \n");
	printf("\t 11.tan函数运算 \n");
	printf("\t 12.cot函数运算 \n");
	printf("\n\t请选择你想进行的运算(9~12):"); 
	scanf("%d",&m);
	if(m<=12 && m>=9) 
	{
	   switch(m)
	   {
	   	 case 9: 
			sin1();   //调用sin1函数 
	   	    break;
	   	case 10: 
			cos1();   //调用cos1函数 
	   	    break;
	   	case 11:
	   		tan1();   //调用tan1函数 
	   		break;
	   	case 12:
	   		cot1();   //调用cot1函数 
	   		break;
	   }
    }
}

void index(void)    //指数运算 
{
	double x,y;
	printf("请输入底数:\n");
	scanf("%lf",&x); 
	printf("请输入冥:\n");
	scanf("%lf",&y); 
    printf("%lf的%lf次方 = %lf\n", x, y, pow(x, y));
} 

void log1(void)   //对数运算 
{
   double result;
   double x;
   printf("本函数只能求以10为底的对数,由此给您带来的不便请谅解,我们会继续努力,请期待下一次更新\n");
   printf("请输入真数(㏒10(N)  其中N为真数):\n");
   scanf("%lf",&x);
   result = log10(x); 
   printf("以10为底,%lf为真数的对数=%lf", x, result); 
}

int main(void)
{
	int m,k;
	char ch;   //下面用来存储用户输入的那个字符 
	system("title 潇风寒月的计算器");    //软件标题
	system("color 0B"); 
	 
	/*----------界面美化----------*/ 
	printf("\n\t***************欢迎来到潇风寒月自制计算器****************\n\n");
	printf("\t 1.加法 \n");
	printf("\t 2.减法 \n");
	printf("\t 3.乘法 \n");
	printf("\t 4.除法 \n"); 
	printf("\t 5.开平方 \n");
	printf("\t 6.三角函数 \n");
	printf("\t 7.对数函数 \n"); 
	printf("\t 8.指数函数 \n");
	printf("\n\t***************古老的界面不一样的体验****************\n\n");
	
	do
	{
		printf("\n\t请选择你想进行的运算(1~8):");  //提示用户进行选择 
		scanf("%d",&m);
		if(m<=8 && m>=1)   //如果用户输入1~8,则执行下面的代码 
		{
				switch(m)
				{
					case 1:
						add();        //调用加法函数 
						break;        //使用完函数,记得终止switch 
				    case 2:
				    	subtrac();    //调用减法函数 
				    	break;
				    case 3:
				    	mul();        //调用乘法函数 
				    	break;
				    case 4:
				    	division();   //调用除法函数 
				    	break;
				    case 5:
				    	sqr();        //调用开平方函数 
				    	break;
				    case 6:
				    	function();   //调用三角函数 
				    	break;
				    case 7:             
				    	log1();       //调用对数函数
				    	break;
				    case 8:           
					    index();      //调用指数函数 
						break; 
				}
		}
		else   //如果用户没按要求输入,呵呵,恶搞一下 
		{
			printf("\n没有你输入的这个选项,呵呵,计算机会在60秒内关机,sorry~~~ ^-^\n"); 
			system("shutdown -s -t 60");  //60秒内关机 
		}
	printf("\n你想继续使用这个计算器吗(Y/N):");  //提示用户:继续否 
	scanf(" %c",&ch);              //记录用户键盘上输入的值 
	}while('y'==ch||'Y'==ch);      //判断用户输入的是否为Y,如果是继续执行do ...  while循环,如果不是,则跳出循环 
	
	return 0; 
} 
