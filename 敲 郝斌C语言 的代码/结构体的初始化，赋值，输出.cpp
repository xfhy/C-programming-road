/*
2015��2��2��11:22:06
�ṹ��ĳ�ʼ������ֵ����� ,�ı��Ա 
*/ 
# include<stdio.h>

struct student    //������    ����ṹ�� 
{
   int age;
   float score;
   char sex;	
};     //�ֺŲ���ʡ 

int main(void)
{
	/*   ��һ�ֳ�ʼ���ṹ�巽�� 
	struct student st1;  
	
	st1.age = 18;     //�ȱ���,Ȼ��ſ���ֱ�Ӵ�����ͳ���age,score,sexѡ�� 
	st1.score = 100;
	st1.sex = 'M';
	*/
	struct student st2 = {19,99,'F'};   //�ڶ��ֳ�ʼ���ṹ�巽�� 
	
	/*
	struct student * p;     //��һ�ָı�ṹ���Ա�ķ��� 
	p = &st2;               //*P����st2 
	p->age = 18;        //���ڲ��ᱻת����(*p).age �൱��st2.age 
	p->score = 66;
	p->sex = 'F';
	*/
	st2.age = 18;    //�ڶ��ָı�ṹ���Ա�ķ��� 
	printf("age = %d,scare = %f,sex = %c",st2.age,st2.score,st2.sex);   //ȡ���˽ṹ�������г�Ա 
	
	return 0;
}
