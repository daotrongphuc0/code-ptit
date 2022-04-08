#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int n;
        long long  k;
        cin >> n>> k;
       // bool ok =false ;
        long long hieu =LONG_LONG_MAX;
        int floor =-1;
        long long ai;
        for (int i = 0; i < n; i++)
        {
            cin >> ai ;
            if(ai <= k) {
                if(k - ai < hieu) {
                    floor =i+1;
                    hieu =k-ai;
                }
            }   
        }
        cout << floor <<endl;
        
    }
    return 0;
}
