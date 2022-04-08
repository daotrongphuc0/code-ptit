#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        int dd = s.length();
        int m[dd] ;
        for (int i = 0; i < dd; i++)
        {
            m[i] = s[i] - 48;
        }
        m[dd-1] ++;
        for (int i = dd-1; i >= 0 ; i--)
        {
            if(m[i] > 1) {
                m[i] =0;
                m[i-1] += 1;
            }
        }
        for (int i = 0; i < dd; i++)
        {
            cout << m[i] ;
        }
        cout << endl;
        
    }
    return 0;
}
