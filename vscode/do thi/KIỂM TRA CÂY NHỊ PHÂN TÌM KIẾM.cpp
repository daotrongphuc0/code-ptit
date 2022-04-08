#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left,*right;
};

void addNode(node* &t,int x){
	if(t == NULL){
		node *p = new node;
		p->data = x;
		p->right = p->left = NULL;
		t = p;
		}
	else{
		if(x<t->data) addNode(t->left,x);
		if(x>t->data) addNode(t->right,x);
	}
}

void inorder(node *t,int b[],int k){
	if(t!=NULL){
		inorder(t->left,b,k);
		b[k]=t->data;k++;
		inorder(t->right,b,k);
		}
	}
	
int main(){
	int t;
	cin>>t;
	while(t--){
		node *t = NULL;
		int n,a[10001],b[10001],x,check=1;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			a[i]=x;
			addNode(t,x);
			}
		inorder(t,b,0);
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				check = 0;
				break;
				}
			}
		cout<<check<<endl;
		}
	}