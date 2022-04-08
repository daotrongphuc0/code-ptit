#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == x)
      
      return i;
  
  return -1;
}
 
int main() {
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x;
        int arr[100000];
        for(int i=0;i<n;i++) cin>>arr[i];
        int result = search(arr, n, x);
        if (result != -1) 
            cout<<result+1<<endl;
        else
            cout<<"NO"<<endl;
  }
  return 0;
}