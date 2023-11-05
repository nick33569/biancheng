#include<cstdio>
#include<iostream>
#include<ctime>
using namespace std;
int id[5000005];
struct Node{
    int size;//以这个结点为根的结点总数，用于名次数
    int rank;//优先级，用于维持树的平衡性，优先级越高则结点在树的上层
    int key;//键值，表示结点的值
    Node *son[2];//son[0]表示左子树，son[1]表示右子树
    //构造函数，用于初始化结点
    Node(int size,int rank,int key):size(size),rank(rank),key(key){
        son[0]=son[1]=NULL;//一开始生成时左子树和右子树均为空
    }
    //重载小于运算符，用于比较结点的优先级
    bool operator<(const Node &a) const{
        return rank<a.rank;
    }
    //比较函数，用于判断插入结点的位置
    int cmp(int x) const{
        if(x==key) return -1;//表示键值相等
        return x<key?0:1;//返回0表示插入到左子树，返回1表示插入右子树
    }
    //更新结点的size属性，表示该节点为根的子树的结点总数
    void update(){
        size=1;
        if(son[0]!=NULL) size+=son[0]->size;
        if(son[1]!=NULL) size+=son[1]->size;//两个都必须要判断是否为空
    }
};
//d=0左旋，d=1右旋
void rotate(Node *&o,int d){
    Node *k=o->son[d^1];//记录当前结点的另一个子树，d^1与1-d等价，但是速度♂更快
    o->son[d^1]=k->son[d];//将当前结点的另一子树的相应子树更新为k的相应子树
    k->son[d]=o;//将当前结点连接到k的相应子树上
    o->update();//更新当前节点的size
    k->update();//更新当前节点的size
    o=k;//更新当前结点为k结点，实现旋转操作
}
//把x插入到树中
void insert(Node *&o,int x){
    if(o==NULL) o=new Node(1,rand(),x);//如果结点为空，创建键值为x，优先级为随机树的结点
    else{
        int d=o->cmp(x);//比较当前结点的键值和要插入结点的键值x，-1表示相等，0表示大于x，1表示小于x
        insert(o->son[d],x);//递归插入结点到当前结点的左子树或右子树
        o->update();//更新当前节点的size
        if(o<o->son[d])//如果当前节点的优先级小于它的子结点的优先级
            rotate(o,d^1);//进行旋转操作，维持这棵树的平衡性
    }
}
//返回第k大的数
int kth(Node *o,int k){
    if(o==NULL||k<=0||k>o->size) return -1;//如果当前结点为空，或者k小于等于0，或者k大于当前结点子树的结点数，则返回-1 
    int s=o->son[1]==NULL?0:o->son[1]->size;//用于计算当前结点的右子树的结点数量
    if(k==s+1) return o->key;//如果当前结点的右子树结点数量+1，表示当前结点即为第k大的数
    else if(k<=s) return kth(o->son[1],k);//如果k小于等于当前结点的右子树结点数量，递归在右子树中找第k大的数
    else return kth(o->son[0],k-s-1);//如果k大于等于当前结点的左子树结点数量，递归在左子树中找第k大的数
}
//返回元素k的名次
int find(Node *o,int k){
    if(o==NULL) return -1;
    int d=o->cmp(k);//比较当前结点的键值和目标值x，-1相等，0表示当前结点小于k，1表示当前结点大于k
    if(d==-1)
        return o->son[1]==NULL?1:o->son[1]->size+1;
    else if(d==1)
        return find(o->son[1],k);
    else{
        int temp=find(o->son[0],k);
        if(temp==-1) return -1;
        else return o->son[1]==NULL?temp+1:temp+1+o->son[1]->size;
    }
}
int main(){
    int n;//我不能让任何一行没有注释
    while(~scanf("%d",&n)&&n){//存在多组输入
        srand(time(NULL));//使用当前时间作为随机数种子，让每次程序运行时得到的随机数序列不同
        int k;//id
        int g;//战斗等级
        scanf("%d %d",&k,&g);
        Node *root=new Node(1,rand(),g);//创建根结点，键值为g，优先级是随机数
        id[g]=k;//将结点的编号与名次存入id数组中
        printf("%d 1\n",k);
        //循环读取，构建名次树(Treap)并输出每个结点的编号和名次
        for(int i=2;i<=n;i++){
            scanf("%d %d",&k,&g);
            id[g]=k;
            insert(root,g);//插入结点到名次树中
            int t=find(root,g);//返回新插入结点的名次
            int ans1,ans2,ans;
            ans1=kth(root,t-1);//前一个老登
            ans2=kth(root,t+1);//后一个老登
            if(ans1!=-1&&ans2!=-1) ans=ans1-g>=g-ans2?ans2:ans1;//判断前一个和后一个中与当前结点距离更近的结点
            else if(ans1==-1) ans=ans2;
            else ans=ans1;
            printf("%d %d\n",k,id[ans]);//输出编号和名次
        }
    }
    return 0;
}
//code from: 贾老师
//这代码非常的美丽啊