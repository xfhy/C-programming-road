/*
2015年5月6日11:21:49
插入排序 
通常是排序整个无序数组，所以把这个无序数组分为两部分排序好的子数组和待插入的元素。
第一轮时，将第一个元素作为排序好的子数组，
插入第 二个元素；第二轮，将前两个元素作为排序好的数组，
插入第三个元素。以此类推，第i轮排序时，
在前i个元素的子数组中插入第i+1个元素。直到所有元素都 加入排序好数组
*/
//插入排序

#include<stdio.h>

void main()

{

int a[10];

int i,j,k;

printf("请输入10个数字!空格隔开\n");

for(i=0;i<10;i++)

scanf("%d",&a[i]);


for(i=1;i<10;i++)
{
   k=a[i];
   j=i-1;
   while((j>=0)&&(a[j]>k))
{

a[j+1]=a[j];

j--;

}

a[j+1]=k;

}

printf("你输入的数字按照插入排序法由小到大排序后为\n");

for(i=0;i<10;i++)

printf("%d",a[i]);

printf("\n");

}