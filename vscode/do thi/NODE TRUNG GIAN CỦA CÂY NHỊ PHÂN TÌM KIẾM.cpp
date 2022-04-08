#include<bits/stdc++.h>
using namespace std;
struct node{
        int data;
		node *left,*right;
};

void addNode(node *&t,int x){
	if(t==NULL){
		node *p=new node;
		p->data=x;
		p->left=p->right=NULL;
		t=p;
		}
	else{
		if(x<t->data) addNode(t->left,x);
		if(x>t->data) addNode(t->right,x);
	}
}
	
void BFS(node *root){
	queue<node *>st;
	st.push(root);
	int dem=0;
	while(!st.empty()){
		node *t=st.front(); st.pop();
		if(t->left!=NULL||t->right!=NULL)
		    dem++;
		if(t->left!=NULL) st.push(t->left);
		if(t->right!=NULL) st.push(t->right);
		}
		cout<<dem<<endl;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,u;
		cin>>n;
		node *root = NULL;
		while(n--){
			cin>>u;
			addNode(root,u);
			}
		BFS(root);
		}
	return 0;
}