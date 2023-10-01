#include<bits/stdc++.h>
using namespace std;

struct node{
	int value;
	node *l,*r;
	node(int value=value,node *l=NULL,node *r=NULL):value(value),l(l),r(r){};
}
void buildtree(int t,node *&root){
	if(!root) root=new node;
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
void removetree(node *root){
	if(!root) return;
	removetree(root->l);
	removetree(root->r);
	delete root;
}
int main(){
	int n,t=0;
	
	while(~scanf("%d",&n)){
		node root=new node;
		for(int i=0;i<n;i++){
			cin>>t;
			buildtree(t,root);
		}
		preorder(root);
		removetree(root);
	}
    return 0;
}