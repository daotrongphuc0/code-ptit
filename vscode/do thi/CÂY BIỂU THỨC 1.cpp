#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    node *left,*right;
};

bool check(char c){
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
        return true;
    return false;
}

void inorder(node *t){
    if(t!=NULL){
        inorder(t->left);
        cout<<t->data;
        inorder(t->right);
    }
}

node *newNode(char v){
    node *temp = new node;
    temp->left = temp->right = NULL;
    temp->data = v;
    return temp;
}

node *Tree(string a){
    stack<node*> st;
    node *t,*t1,*t2;

    for(int i=0;i<a.size();i++){
        if(!check(a[i])){
            t = newNode(a[i]);
            st.push(t);
        }
        else{
            t = newNode(a[i]);
            t1 = st.top();
            st.pop();
            t2 = st.top();
            st.pop();

            t->right = t1;
            t->left = t2;

            st.push(t);
        }
    }
    t = st.top();
    st.pop();

    return t;
}

int main(){
    int x;
    cin>>x;
    cin.ignore();
    while(x--){
        string s;
        getline(cin,s);
        node *r = Tree(s);
        inorder(r);
        cout<<endl;
    }
}