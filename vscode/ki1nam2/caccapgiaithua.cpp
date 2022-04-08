#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string so;
        cin >> so;
        int *kq = new int[10] ;
        int j =0;
        for (int i = 0; i < n; i++)
        {
           // int thu = so.at(i) - 48;
            if ( so[i] == '2' || so[i] == '3' || so[i] == '5' || so[i] == '7'){ kq[j] = so.at(i) - 48; j++;}
            if( so[i] == '4')  {
                  kq[j] = 3;
                  kq[j+1] = 2;
                  kq[j+2] =2;
                  j += 3;
              }       
            if( so[i] == '6'){
                  kq[j] = 5;
                  kq[j+1] =3;
                  j += 2;
              }
            if( so[i] == '8'){ 
                  kq[j] = 7;
                  kq[j+1] =2;
                  kq[j+2] =2;
                  kq[j+3] =2;
                  j += 4;; break;
              }
            if( so[i] == '9'){
                 kq[j] = 7;
                 kq[j+2] =2;
                 kq[j+1] =3;
                 kq[j+3] =3;
                 j += 4;; break;
              }
        }
        sort(kq,kq +j);
        for (int i = j-1; i >= 0; i--)
        {
            cout << kq[i];
        }
            cout << endl;

    }
    return 0;
}
