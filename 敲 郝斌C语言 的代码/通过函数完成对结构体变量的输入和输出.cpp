/*
2015��2��3��18:22:02
ͨ��������ɶԽṹ��������������� 
*/

# include<stdio.h>
# include<string.h>

struct bedroom
{
    char name[100];
    int age;
    char sex;
};     //�ֺŲ���ʡ 

void input(struct bedroom * p)
{
	 (*p).age = 18;
	 (*p).sex = 'F';      
	 strcpy(p->name,"�Ŵ�");   //����ṹ�����ֱ�����strcpy(,) ������,
	                          // ��������# include<string.h>��,���Լǵü�ͷ�ļ� 
	 
	 return; 
}

void output(struct bedroom Michael)   //ֻ�ǵ�������ṹ�� 
{
    printf(" ����:%s ����:%d �Ա�:%c",Michael.name,Michael.age,Michael.sex); 
	           //�������ַ���,��%s���	
}

int main(void)
{
	struct bedroom Michael;
	input(&Michael);
	output(Michael);  //���﷢�����ݱȽϺ�,���͵�ַ�Ļ��п���ʧ������޸��� 
	                 //�����Ƽ�ʹ�÷��͵�ַ,�ٶȿ�,ռ���ڴ�С 
	
	return 0;
}
