#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left,*right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};

void themNode(node *&t,int x){
    if(t == NULL){
        node *p = new node(x);
        t = p;
    }
    else{
        if(x<t->data) themNode(t->left,x);
        if(x>t->data) themNode(t->right,x);
    }
}

void posorder(node *t){
    if(t!=NULL){
        posorder(t->left);
        posorder(t->right);
        cout<<t->data<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        node *t = NULL;
        while(n--){
            int x;
            cin>>x;
            themNode(t,x);
        }
        posorder(t);
        cout<<endl;
    }
}