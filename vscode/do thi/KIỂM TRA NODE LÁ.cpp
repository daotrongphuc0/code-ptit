#include<bits/stdc++.h>
using namespace std;

class node {
    public:
       int data,level;
       node *left,*right;

       node(int p){
           this->data = p;
           this->level = 0;
           this->left = this->right = NULL;
       }

       void addNode(char x,node *p){
           p->level = this->level + 1;
           if(x=='L' && this->left == NULL) this->left = p;
           if(x=='R' && this->right == NULL) this->right = p;
       }
};

node *Search(node *t, int u) {
    if (t == NULL || t->data == u) return t;
    else {
        node *p = Search(t->left, u);
        if (p == NULL) p = Search(t->right, u);
        return p;
    }
}

bool BFS(node *root){
    vector<int> res;
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node *v = q.front(); q.pop();
        if(v->left == NULL && v->right == NULL) 
            res.push_back(v->level);
        if(v->left != NULL) q.push(v->left);
        if(v->right != NULL) q.push(v->right);
    }
    for(int i=0;i<res.size()-1;i++)
        if(res[i] != res[i+1]) return false;
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
        root->addNode(x, p);
        for(int i=1;i<n;i++){
            cin>> u >> v >> x;
            p = Search(root,u);
            node *p1 = new node(v);
            p->addNode(x,p1);
        }
        if(BFS(root)) cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}