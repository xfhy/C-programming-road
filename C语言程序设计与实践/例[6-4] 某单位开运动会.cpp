/*
2015��4��6��16:48:51
��[6-4] ĳ��λ���˶���,��10�˲μ�Ů��100���ܱ��� 
*/
/*
# include <stdio.h>

int main(void)
{
	int i,j,t1,q=0,m[11];
	float t2,x[11];
	for(i=0; i<11; i++)   //��ʼ�� ,���� 
	{
		m[i] = 0;
		x[i] = 0.0;
	} 
	for(i=1; (i<11 && m[i-1]!=-1); i++)  //���� 
	{
		scanf("%d,%f",&m[i],&x[i]);
		q++;
	}
	printf("i  m  n\n");
	for(i=1; i<q-1; i++)   //����
	{
		for(j=i+1; j<=q; j++)
		{
			if(x[i]<x[j])
			{
			  t2 = x[i]; x[i] = x[j]; x[j] = t2;
			  t1 = m[i]; m[i] = m[j]; m[j] = t1;
		    }
		    printf("%5d %5d %5.2f \n",i,m[i],x[i]);
		} 
		printf("%5d %5d %5.2f \n",q,m[q],x[q]);
	} 
	
	return 0; 
} */
# include <stdio.h>
# include <malloc.h>

struct ranking
{
	int num;
	float score;
};
typedef struct ranking cc;
int main(void)
{
	int i,j,len;
	printf("����������:\n");
	scanf("%d",&len);
	cc *p = (cc *)malloc(sizeof(cc)*len);
	cc t;
	for(i=0; i<len; i++)
	{
		printf("������ѧ��:");
		scanf("%d",&p[i].num); 
		printf("���������:");
		scanf("%f",&p[i].score); 
	}
	for(i=0; i<len-1; i++)
	{
		for(j=0; j<len-i-1; j++)
	    {
	    	if(p[j].score<p[j+1].score)
	    	{
	    		t = p[j];
	    		p[j] = p[j+1];
	    		p[j+1] = t;
			}
	    	  
		}
	}
	for(i=0; i<len; i++)
	{
		printf("%4d %4.2f\n",p[i].num,p[i].score);
	}
	
	return 0;
}
