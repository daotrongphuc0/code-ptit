#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int mang[n],kq[n];
        for (int i = 0; i < n; i++)
        {
            cin >> mang[i];
        }
        kq[0] = mang[0] * mang[1];
        kq[n-1] = mang[n-1] * mang[n-2];
        for (int i = 1; i < n -1; i++)
        {
            kq[i] = mang[i-1] * mang[i+1];
        }
        for (int i = 0; i < n; i++)
        {
            cout << kq[i]<< " ";
        }
        cout <<endl;
        
    }
    return 0;
}
