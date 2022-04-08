#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int mang[n];
        for (int i = 0; i < n; i++)
        {
           cin >> mang[i];         
        }
        sort(mang,mang+n,greater<int>());
        int j=0;
        if(n%2==0){
            for (int i = 0; i < n/2; i++)
            {
                cout<< mang[i] << " "<< mang[n-1-j] << " ";
                j++;
            }   
        }
        else{
            for (int i = 0; i < n/2; i++)
            {
                cout<< mang[i] << " "<< mang[n-1-j] << " ";
                j++;
            }
            cout << mang[n/2];  
        }
        cout << endl;
        
    }
    return 0;
}
