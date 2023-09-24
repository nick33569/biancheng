#include<iostream>
using namespace std;

void dele(node *head,int i){
    node *p,*s;//定义节点
    int j;//节点标记
    p=head;//标记头节点地址
    j=0;//寻找当前需要删除的节点
    while((p!=NULL)&&(j<i-1)){
        p->next;
        j+=1;
    }//p指向第i-1个节点
    if(p->next=NULL){
        cout<<"无法删除此节点";
        else{
            s=p->next;
            p->next=p->next->next;
            free(s);//释放空间
        }
    }
}
