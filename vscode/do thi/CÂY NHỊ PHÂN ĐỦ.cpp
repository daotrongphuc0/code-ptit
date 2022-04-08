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
        if(p == NULL) p = search(t->r,u);
        return p;
    }
}

bool BFS(node *root){
    queue<node*>st;
    st.push(root);
    while(!st.empty()){
        node *t = st.front(); st.pop();
        if(t->l != NULL && t->r == NULL) return false;
        if(t->l == NULL && t->r != NULL) return false;
        if(t->l != NULL && t->r != NULL){
            st.push(t->l);
            st.push(t->r);
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,u,v;
        char x;
        cin>>n >>u >>v >>x;
        node *root = new node(u);
        node *p = new node(v);
        root->addnode(p,x);
        for(int i=1;i<n;i++){
            cin>>u>>v>>x;
            p = search(root,u);
            node *p1 = new node(v);
            p->addnode(p1,x);
        }
        if(BFS(root)) cout<<"1\n";
        else cout<<"0\n";
    }
}