#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int tmp;
    tmp =a;
    a =b;
    b =tmp;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mang[n];
        for (int  i = 0; i < n; i++)
        {
            cin >> mang[i];
        }
        for (int i = 0; i < n- 1; i++)
        {
            for (int j = i; j < n; j++)
            {
                if(mang[i]> mang[j]) swap(mang[i],mang[j]);
            }
            
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << mang[i] << " ";
        // }
        for (int i = 0; i < n/2; i++)
        {
            cout << mang[n-i-1] <<" "<<mang[i]<<" ";
        }
        if(n % 2 == 1) cout << mang[n/2]<< " ";
        
       cout << endl; 
    }
    return 0;
}
