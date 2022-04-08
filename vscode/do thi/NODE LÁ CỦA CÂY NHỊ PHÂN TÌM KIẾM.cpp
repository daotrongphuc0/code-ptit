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
	
void duyet(node *t){
	if(t!=NULL){
		if(t->left==NULL&&t->right==NULL) cout<<t->data<<" ";
		duyet(t->left);
		duyet(t->right);
		}
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
	    duyet(root);
		cout<<endl;
		}
	return 0;
}