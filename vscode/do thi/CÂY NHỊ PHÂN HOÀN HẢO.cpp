#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data,level;
        node *left,*right;

        node(int p){
            this->data = p;
            this->level = 0;
            this->left = this->right = NULL;
        }

        void addnode(node *t,char x){
            t->level = this->level + 1;
            if( x == 'L' && this->left == NULL )  this->left = t;
            if( x == 'R' && this->right == NULL ) this->right = t;
        }
};

node *search(node *t,int x){
    if(t==NULL||t->data==x) return t;
    else{
        node *p= search(t->left,x);
        if(p==NULL) p = search(t->right,x);
        return p;
    }
}

bool BFS(node *root){
    vector<int>a;
    stack<node *> st;
    st.push(root);
    while(!st.empty()){
        node *v = st.top(); st.pop();
        if(v->left == NULL && v->right == NULL)
            a.push_back(v->level);
        if(v->left != NULL && v->right == NULL) return false;
        if(v->left == NULL && v->right != NULL) return false;
        if(v->left != NULL && v->right != NULL){
            st.push(v->left);
            st.push(v->right);
        } 
    }
    for(int i=0;i<a.size()-1;i++)
        if(a[i] != a[i+1]) return false;
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,u,v;
        char x;
        cin>> n >> u >> v >> x;
        node *root = new node(u);
        node *p = new node(v);
        root->addnode(p,x);
        for(int i=1;i<n;i++){
            cin>>u>>v>>x;
            p = search(root,u);
            node *p1 = new node(v);
            p->addnode(p1,x);
        }
        if(BFS(root)) cout<<"Yes\n";
        else cout<<"No\n";
    }
}