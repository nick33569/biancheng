#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int k,pre[N],in[N],post[N];//先序 中序 后序
struct node{
    int value;
    node *l,*r;
    //定义构造函数，方便调用
    node(int value=0,node *l=NULL,node *r=NULL):value(value),l(l),r(r){};
};
//Build the tree，l起始, r结束, &t当前层级, *&root根节点
void buildtree(int l,int r,int &t,node *&root){
    int flag=-1;
    for(int i=l;i<=r;i++)
        //每次找到in和pre相等的值作为当前的根节点
        if(in[i]==pre[t]){
            flag=i;
            break;
        }
    if(flag==-1) return;
    root=new node(in[flag]);//新建根结点
    t++;//t做为层级
    if(flag>l) buildtree(l,flag-1,t,root->l);//root->l l作为根节点
    if(flag<r) buildtree(flag+1,r,t,root->r);//root->r r作为根节点
}
//Find the preorder sequence
void preorder(node *root){
    if(root!=NULL){
        post[k++]=root->value;
        preorder(root->l);
        preorder(root->r);
    }
}

//Free up space
void remove_tree(node *root){
    if(root==NULL) return;
    remove_tree(root->l);
    remove_tree(root->r);
    delete root;
}
int main(){
    int n;
    while(~scanf("%d",&n)){
        for(int i=1;i<=n;i++) scanf("%d",&pre[i]);//存入先序
        for(int i=1;i<=n;i++) scanf("%d",&in[i]);//存入中序
        node *root;//创建根结点,new运算符动态申请内存
        int t=1;
        buildtree(1,n,t,root);
        k=0;//记录结点个数
        postorder(root);
        for(int i=0;i<k;i++) printf("%d%c",post[i],i==k-1?'\n':' ');
        //作为验证，这里可以用preorder()和inorder()检查先序和中序遍历
        remove_tree(root);
    }
    return 0;
}