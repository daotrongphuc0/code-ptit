#include <bits/stdc++.h>
using namespace std;
bool kt(int m[],int n,int k){
    for (int i = 0; i < n; i++)
    {
        if(m[i] == k) return true;
    }
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int *m = new int[n];
        for (int i = 0; i < n-1; i++)
        {
            cin >> m[i];
        }
        int count =1;
        int x =0;
        for (int i = 0; i < n; i++,count ++)
        {
            if(kt(m,n-1,count ) == false)  break;
        }
         cout <<  count <<endl; 
    }
    return 0;
}
