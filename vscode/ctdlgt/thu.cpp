#include <bits/stdc++.h>
using namespace std;

int main(){
    int m[5] ={1,2,3,4,5};
    bool ok =false ;
    cout << " nhap:";
    while(!ok){
        int n; cin >> n;
        for (int i = 0; i < 5; i++)
        {
            if(m[i] == n) {ok =true;break;}
        }
        if(!ok) cout <<"nhap lai :";
        
    }
    cout <<endl<< " ok";
    return 0;
}
