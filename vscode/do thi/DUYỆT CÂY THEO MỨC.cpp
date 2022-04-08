#include<bits/stdc++.h>
using namespace std;
vector<int>s;
struct node{
    int data;
    node *left,*right;
    node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }   
};
typedef node NODE;

void noi_node(NODE* &t,int b,char c){
    if( c == 'L') t->left = new node(b);
    if( c == 'R') t->right = new node(b);
}

void tao_tree(NODE *t,int a,int b,char c){
    if( t == NULL ) return ;
    if( t->data == a) noi_node(t,b,c);
    tao_tree(t->left,a,b,c);
    tao_tree(t->right,a,b,c);
}

void duyet(NODE *root){
    queue<NODE *>q;
    q.push(root);
    while(!q.empty()){
        NODE *x = q.front(); q.pop();
        cout<<x->data<<" ";
    //    s.push_back(x->data);
    //    if(x->right) q.push(x->right);
        if(x->left) q.push(x->left);
        if(x->right) q.push(x->right);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        s.clear();
        int n;
        cin>>n;
        NODE *t = NULL;
        while(n--){
            int a,b; char c;
            cin>> a >> b >> c;
            if( t == NULL) {
                t = new NODE(a);
                noi_node(t,b,c);
            }
            else tao_tree(t,a,b,c);
        }
        duyet(t);
    //    for(int i=s.size()-1;i>=0;i--) cout<<s[i]<<" ";
        cout<<"\n";        
    }
}