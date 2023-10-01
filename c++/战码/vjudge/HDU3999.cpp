#include<bits/stdc++.h>
using namespace std;

struct node{
    int value;
    node *l,*r;
    node(int value=0,node *l=NULL,node *r=NULL):value(value),l(l),r(r){};
};
void buildtree(int t,node *&root){
    if(!root) root=new node(t);
    else if(t<root->value) buildtree(t,root->l);
    else buildtree(t,root->r);
}
void preorder(node *root){
    if(root!=NULL){
        printf("%d ",root->value);
        preorder(root->l);
        preorder(root->r);
    }
}
void remove_tree(node *root){
    if(root==NULL) return;
    remove_tree(root->l);
    remove_tree(root->r);
    delete root;
}
int main(){
    int n,t;
    while(~scanf("%d",&n)){
        node *root=NULL;
        for(int i=0;i<n;i++) scanf("%d",&t),buildtree(t,root);
        preorder(root);
        printf("\n");
        remove_tree(root);
    }
    return 0;
}