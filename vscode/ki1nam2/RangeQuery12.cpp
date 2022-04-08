#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        int *a = new int[n];
        int *b = new int[n];
        for (int  i = 0; i < n; i++)
        {
            cin>> a[i];
        }
         for (int  i = 0; i < n; i++)
        {
            cin>> b[i];
        }
        int m = 0;
        for (int i = 0; i < n; i++)
        {   int count =1;int t1= 0,t2 =0;
            for (int j = i; j < n; j++ , count ++)
            {
                t1 += a[j];
                t2 += b[j];
                if(t1 == t2) 
                 m= max(m,count);
                           
            }
        }
       cout << m << endl; 
    }
    return 0;
}
