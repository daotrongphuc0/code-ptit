#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int value;
    string data;
    node *left,*right;

    node(string p){
        this->value = 0;
        this->data = p;
        this->left = this->right = NULL;
    }
};

bool check(char x){
    return (x=='+'||x=='-'||x=='/'||x=='*');
}

int op(int a,int b,char x){
    switch(x){
        case '+': return a+b;break;
        case '-': return a-b;break;
        case '*': return a*b;break;
        case '/': return a/b;break;
    }
    return 0;
}

vector<string>s;

node *tree(){
    queue<node*> st;
    for(int i=s.size()-1;i>=0;i--){
        if(!check(s[i][0])){
            node *tmp = new node(s[i]);
            st.push(tmp);
        }
        else{
            node *op = new node(s[i]);
            node *op1= st.front();
            st.pop();
            node *op2= st.front();
            st.pop();
            op->left = op2;
            op->right= op1;
            st.push(op);
        }
    }
    node *root = st.front();
    st.pop();
    return root;
}

int strToln(string s){
    int n = 0;
    for(int i = 0;i < s.size(); i++){
        n = n*10 + (s[i]-'0');
    }
    return n;
}

int Cacl(node *root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL ) return (strToln(root->data));
    int a = Cacl(root->left);
    int b = Cacl(root->right);
    root->value = op(a,b,root->data[0]);
    return root->value;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        s.resize(n);
        for(int i=0;i<n;i++) cin>>s[i];
        node *root = NULL;
        root = tree();
        cout<<Cacl(root)<<"\n";
    }
    return 0;
}