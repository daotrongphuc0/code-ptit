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

void addNode(node* &t,int x){
	if(t == NULL){
		node *p=new node(x);
		t = p;
		}
	else{
		if(x<t->data) addNode(t->left,x);
		if(x>t->data) addNode(t->right,x);
	}
}

void preoder(node *t){
	if(t!=NULL){
		cout<<t->data<<" ";
		preoder(t->left);
		preoder(t->right);
		}
	}
	
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		node *root=NULL;
		while(n--){
			int x;
			cin>>x;
			addNode(root,x);
			}
		preoder(root);
		cout<<endl;
		}
	return 0;
	}