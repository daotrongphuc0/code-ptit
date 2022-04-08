#include<bits/stdc++.h>
using namespace std;
 
class node
{
    public:
    int data;
    node* left;
    node* right;
};
node* newNode(int data)
{
    node* tmp = new node;
    tmp->data = data;
    tmp->left = NULL;
    tmp->right = NULL;
 
    return tmp;
}
 
node* sortedArrayToBST(int arr[],
                        int start, int end)
{
    if (start > end)
    return NULL;
 
    int mid = (start + end)/2;
    node *root = newNode(arr[mid]);

    root->left = sortedArrayToBST(arr, start,
                                    mid - 1);
 
    root->right = sortedArrayToBST(arr, mid + 1, end);
 
    return root;
}

void preOrder(node* t)
{
    if (t == NULL)
        return;
    cout << t->data << " ";
    preOrder(t->left);
    preOrder(t->right);
}
 
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+5];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
        node *root = sortedArrayToBST(arr, 0, n-1);
        preOrder(root);
        cout<<endl;
        }
 
    return 0;
}