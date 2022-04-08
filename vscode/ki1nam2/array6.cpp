#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int  n;
        cin >> n;
        int mang[n];
        for (int i = 0; i < n; i++)
        {
            cin >> mang[i];
        }
        for (int i = 0; i <= n-2; i++)
        {
            if(   (mang[i+1] != 0 ) && ( mang[i]== mang[i+1])   ){
                mang[i] *= 2;
                mang[i+1] = 0;
            }
        }
        int dem =0;
        for (int i = 0; i < n; i++){
            if(mang[i] != 0)cout << mang[i] << " ";
            else  dem++;
        }
        for(int i =0; i < dem;i++){
            cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
