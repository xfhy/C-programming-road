#include <iostream>
#include<algorithm>
using namespace std;
void HeapAdjust(int *a,int i,int size)  //������ 
{
    int lchild=2*i;       //i�����ӽڵ���� 
    int rchild=2*i+1;     //i���Һ��ӽڵ���� 
    int max=i;            //��ʱ���� 
    if(i<=size/2)          //���i��Ҷ�ڵ�Ͳ��ý��е��� 
    {
        if(lchild<=size&&a[lchild]>a[max])   //���Ӵ��ڸ��� 
        {
            max=lchild;
        }    
        if(rchild<=size&&a[rchild]>a[max])   //�Һ��Ӵ��ڸ���  
        {
            max=rchild;
        }
        if(max!=i)
        {
            swap(a[i],a[max]);     //���� 
            HeapAdjust(a,max,size);    //�������֮����maxΪ���ڵ���������Ƕ� 
        }
    }        
}

void BuildHeap(int *a,int size)    //������ 
{
    int i;
    for(i=size/2;i>=1;i--)    //��Ҷ�ڵ�������ֵΪsize/2 
    {
        HeapAdjust(a,i,size);    
    }    
} 

void HeapSort(int *a,int size)    //������ 
{
    int i;
    BuildHeap(a,size);   //������ 
    for(i=size;i>=1;i--)
    {
        //cout<<a[1]<<" ";
        swap(a[1],a[i]);           //�����Ѷ������һ��Ԫ�أ���ÿ�ν�ʣ��Ԫ���е�����߷ŵ������ 
          //BuildHeap(a,i-1);        //������Ԫ�����½���Ϊ�󶥶� 
        HeapAdjust(a,1,i-1);      //���µ����Ѷ��ڵ��Ϊ�󶥶�   ÿ�ΰ�a[i]����Ϊ���ֵ 
    }
} 

int main(int argc, char *argv[])
{
     //int a[]={0,16,20,3,11,17,8};
    int a[100];
    int size;
    cout<<"�������С:"<<endl;; 
    while(scanf("%d",&size)==1&&size>0)
    {
        int i;
        for(i=1;i<=size;i++)   //���� 
            cin>>a[i];
            
        HeapSort(a,size);    //������ 
        
        for(i=1;i<=size;i++)  //��� 
            cout<<a[i]<<" ";
            
        cout<<endl;
    }
    return 0;
}

