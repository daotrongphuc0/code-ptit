#include <bits/stdc++.h>
using namespace std;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int mang[n];
        for (int i = 0; i < n; i++)
        {
            cin >> mang[i];
        }
        sort(mang,mang+n);
        int dem =n/2 ;
        if(n%2 ==0){
        for (int i = 0; i < dem; i++)
        {
           cout << mang[i] << " " << mang[i+dem] << " ";
        }
        }
        else {
         for (int i = 0; i < dem; i++)
        {
           cout << mang[i] << " " << mang[i+dem+1] << " ";
        }
        cout << mang[int(n/2)] ;
        }
        cout << endl;
    }   
    return 0;
}

