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

void addNode(node *&t,int x){
	if(t==NULL){
		node *p=new node(x);
		t=p;
		}
	else{
		if(x<t->data) addNode(t->left,x);
		if(x>t->data) addNode(t->right,x);
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
		node *t=NULL;
		int n;
		cin>>n;
		while(n--){
			int x;
			cin>>x;
			addNode(t,x);
			}
		posorder(t);
		cout<<endl;
		}
	return 0;
	}