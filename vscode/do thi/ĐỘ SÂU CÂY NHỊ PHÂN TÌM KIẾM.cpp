#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left,*right;
};

void addnode(node *&t,int x){
	if(t==NULL){
		node *p=new node;
		p->data=x;
		p->right=p->left=NULL;
		t=p;
		}
	else{
		if(x<t->data) addnode(t->left,x);
		if(x>t->data) addnode(t->right,x);
	}
}

int maxdepth(node *t){
	if(t==NULL) return -1;
	else{
		int idepth=maxdepth(t->left);
		int rdepth=maxdepth(t->right);
		return max(idepth,rdepth)+1;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		node *t=NULL;
		int n,x;
		cin>>n;
		while(n--){
			cin>>x;
			addnode(t,x);
			}
		cout<<maxdepth(t)<<endl;
		}
	return 0;
	}