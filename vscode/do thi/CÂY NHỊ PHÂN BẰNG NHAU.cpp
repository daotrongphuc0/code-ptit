#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *l,*r;

    node(int p){
        this->data = p;
        this->l = this->r = NULL;
    }
    void addnode(node *t,char x){
        if(x == 'L' && this->l == NULL ) this->l = t;
        if(x == 'R' && this->r == NULL ) this->r = t;
    }
};

node *search(node *t,int u){
    if(t == NULL || t->data == u) return t;
    else{
        node *p = search(t->l,u);
        if(p == NULL ) p = search(t->r,u);
        return p;
    }
}

int check(node *root1,node *root2){
    if(root1 == NULL && root2 == NULL ) return 1;
    if(root1 != NULL && root2 != NULL ){
        return (root1->data==root2->data && check(root1->l,root2->l) && check(root1->r,root2->r));
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,u,v;
        char x;
        cin>> n >> u >> v >> x;
        node *root1 = new node(u);
        node *p = new node(v);
        root1->addnode(p,x);
        for(int i=1;i<n;i++){
            cin>> u >> v >> x;
            p = search(root1,u);
            node *t = new node(v);
            p->addnode(t,x);
        }
        cin>> n >> u >>v >> x;
        node *root2 = new node(u);
        node *p1 = new node(v);
        root2->addnode(p1,x);
        for(int i=1;i<n;i++){
            cin>> u >> v >> x;
            p1 = search(root2,u);
            node *t1 = new node(v);
            p1->addnode(t1,x);
        }
        cout<<check(root1,root2)<<endl;
    }
    return 0;
}