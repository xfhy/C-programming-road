#include<stdio.h>
#include<iostream>
using namespace std;
//定义结构体
typedef struct Node{
    int val;
    Node* next;
} Node;

void swap(Node* a,Node* b){
    int tmp = a->val;
    a->val = b->val;
    b->val = tmp;
}

//找到分割点
Node* getSeparator(Node* pBegin,Node* pEnd){
    Node* p = pBegin;
    Node* q = pBegin->next;
    int key = p->val;
    while(q!=pEnd){
        if(q->val < key){
            p = p->next;
            swap(p,q);
        }
        q = q->next;
    }
    swap(pBegin,p);
    return p;
}

//快速排序
void fastSort(Node* pBegin,Node* pEnd)
{
    if(pBegin != pEnd)
	{
        Node* separator = getSeparator(pBegin,pEnd);
        fastSort(pBegin,separator);
        fastSort(separator->next,pEnd);
    }
}

//创建链表
Node* createNode(){
    int in;
    Node* n;
    cin >> in;
    if(in == 1000){
        n = NULL;
    }else{
        n = new Node();
        n->val = in;
        n->next = createNode();
    }
    return n;
}

int main(){
    Node* n1 = createNode();
    cout << "++++++++++++++排序前+++++++++++++++++"<< endl;
    Node* cur = n1;
    while(cur!=NULL)
	{
        cout<<cur->val<<endl;
        cur = cur->next;
    }


    fastSort(n1,NULL);
    cout << "++++++++++++++排序后+++++++++++++++++"<< endl;
    cur = n1;
    while(cur!=NULL){
        cout<<cur->val<<endl;
        cur = cur->next;
    }
    return 0;
}
