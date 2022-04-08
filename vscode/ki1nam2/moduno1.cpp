#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        long p;
        cin>>x>>y>>p;
        long long gt =1;
        for (int i = 0; i < y; i++)
        {
            gt *= x;
        }
        
        cout<< gt % p<<endl;
    }
    return 0;
}
