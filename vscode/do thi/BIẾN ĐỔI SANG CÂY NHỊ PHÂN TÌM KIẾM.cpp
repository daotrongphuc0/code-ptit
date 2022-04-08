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

        void addnode(char x,node *t){
            if(x == 'L' && this->left == NULL) this->left = t;
            if(x == 'R' && this->right == NULL) this->right = t;
        }
};

node *search(node *root,int u){
    if(root == NULL || root->data == u) return root;
    else{
        node *p = NULL;
        p = search(root->left,u);
        if(p == NULL) p = search(root->right,u);
        return p;
    }
}

vector<int>a;
void xuli(node *root,int *ipx){
    if(root == NULL) return;
    xuli(root->left,ipx);
    root->data = a[*ipx];
    (*ipx)++;
    xuli(root->right,ipx);
}

void inorder(node *root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,u,v;
        char x;
        a.clear();
        cin>>n>>u>>v>>x;
        a.push_back(u);
        a.push_back(v);
        node *root = new node(u);
        node *p = new node(v);
        root->addnode(x,p);
        for(int i=1;i<n;i++){
            cin>>u>>v>>x;
            a.push_back(u);
            a.push_back(v);
            p = search(root,u);
            node *p1 = new node(v);
            p->addnode(x,p1);
        }
        sort(a.begin(),a.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        int i = 0;
        xuli(root,&i);
        inorder(root);
        cout<<endl;
    }
}