#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left,*right;
};
int dem = 0;
node *newnode(int x){
	node *tmp=new node;
	tmp->data=x;
	tmp->left=tmp->right=NULL;
	return tmp;
}

node *tree(int a[],int start,int end){
	if(start>end) return NULL;
	int mid = (start+end)/2;
	node *root = newnode(a[mid]);
	root->left = tree(a,start,mid-1);
	root->right = tree(a,mid+1,end);
	return root;
	}
	
void xuli(node *t){
	if(t!=NULL){
		if(t->left==NULL&&t->right==NULL) dem++;
		xuli(t->left);
		xuli(t->right);
		}
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		dem = 0;
		int n;
		cin>>n;
		int a[n+5];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		node *root = tree(a,0,n-1);
		xuli(root);
		cout<<dem<<endl;
		}
	}