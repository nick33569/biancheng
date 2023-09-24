#include<iostream>
using namespace std;

void dele(Node *head,int i){
    Node *p,*s;//定义节点
    int j;//节点标记
    p=head;//标记头节点地址
    j=0;//寻找当前需要删除的节点
    while((p!=NULL)&&(j<i-1)){
        p->next;
        j+=1;
    }//p指向第i-1个节点
    if(p=NULL) cout<<"no";
    else{
        s=new Node;
        s->data=x;
        s->next=p->next;
        p->next=s;
    }
    }
}
