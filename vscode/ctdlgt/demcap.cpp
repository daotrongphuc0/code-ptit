#include<bits/stdc++.h>  
using namespace std;  
  
 
int count(int x, int Y[], int n, int a[])  
{  
    if (x == 0) return 0;  
  
    if (x == 1) return a[0];  

    int* d = upper_bound(Y, Y + n, x);  
    int ans = (Y + n) - d;  
    ans += (a[0] + a[1]);    
    if (x == 2) ans -= (a[3] + a[4]);  

    if (x == 3) ans += a[2];  
  
    return ans;  
}  
  
int ketqua(int X[], int Y[], int m, int n)  
{    
    int a[5] = {0};  
    for (int i = 0; i < n; i++)  
        if (Y[i] < 5)  
            a[Y[i]]++;  
   
    sort(Y, Y + n);  
  
    int k = 0;
    for (int i=0; i<m; i++)  
        k += count(X[i], Y, n, a);  
  
    return k;  
}  
  
int main()  
{
	int t; cin>>t;
	while(t--){
		int m,n; cin>>m>>n;
        int X[100000],Y[100000];   
        for(int i=0;i<m;i++) cin>>X[i];
		for(int i=0;i<n;i++) cin>>Y[i]; 
        cout << ketqua(X, Y, m, n)<<endl;  
         }
    return 0;  
}