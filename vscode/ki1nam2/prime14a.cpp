#include <bits/stdc++.h>
using namespace std;
void timso(int n){
    for (int  i = 2; i <= sqrt(n); i++)
    {
        int dem =0;
        for (int j = 2; j < i; j++)
        {
            if(i%j==0) {dem++; break;}
        }
        if(dem ==0 ) cout<< i*i <<" ";
    }
  cout << endl;  
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        timso(n);
    }
    return 0;
}
