#include <bits/stdc++.h>
using namespace std;
//void dao(int &)
int main(){
    int n; do {cin >> n;} while(n<=0 || n>= 100);
    int mang[100] ;
    for (int i = 0; i < n; i++)
    {
       do {cin >> mang[i] ;} while(n<=0 || n>= 100) ;
    }
    int dem =0;
    bool xd = false;
    for(int i = 0 ; i < n-1;i++){
        for(int j = i+1 ;j< n ;j++) { if(mang[i]> mang[j]) {int a = mang[i];mang[i] =mang[j];mang[j] =a; xd = true ;} }
        if(xd) {
                cout << "Buoc " << i+1 <<": " ;
                for (int x = 0; x < n; x++){ cout <<mang[x] << " ";}
                cout << endl; xd =false;
                }
    }
    
    return 0;
}
