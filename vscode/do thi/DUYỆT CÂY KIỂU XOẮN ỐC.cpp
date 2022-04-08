#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *left,*right;
        
    node(int p){
        this->data = p;
        this->left = this->right = NULL;
    }
    void addnode(char c,node *t){
        if(c == 'L' && this->left == NULL) this->left = t;
        if(c == 'R' && this->right == NULL) this->right = t; 
    }
};

node *search(node *t,int x){
    if( t == NULL || t->data == x) return t;
    else{
        node *p = search(t->left,x);
        if(p == NULL) p = search(t->right,x);
        return p;
    }
}

void BFS(node *root){
    stack<node*>s1;
    stack<node*>s2;
    s1.push(root);
    while(!s1.empty()||!s2.empty()){
        while(!s1.empty()){
            node *t = s1.top(); s1.pop();
            cout<<t->data<<" ";
            if(t->right) s2.push(t->right);
            if(t->left) s2.push(t->left);
        }
        while(!s2.empty()){
            node *p = s2.top(); s2.pop();
            cout<<p->data<<" ";
            if(p->left) s1.push(p->left);
            if(p->right) s1.push(p->right);
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,u,v;
        char c;
        cin>> n >> u >> v >> c;
        node *root = new node(u);
        node *p= new node(v);
        root->addnode(c,p);
        for(int i=1;i<n;i++){
            cin>> u >> v >> c;
            p = search(root,u);
            node *p1 = new node(v);
            p->addnode(c,p1);
        }
        BFS(root);
        cout<<"\n";
    }
}