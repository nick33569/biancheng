#include<iostream>

using namespace std;

    struct Node
    {
        int data;
        Node *next;
    };
    Node *head,*p,*r;
    int x;

int main(){
    cin>>x;
    head=new Node;
    r=head;
    while(x!=-1){
        p=new Node;
        p->data x;
        p->next=NULL;
        r->next-p;
        r=p;
        cin>>x;
    }
    p=head->next;
    return 0;
}