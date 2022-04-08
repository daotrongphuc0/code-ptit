#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    int m[n];
    for (int i = 0; i < n; i++) cin >> m[i];
    for (int  i = 0; i < n; i++)
    {
        cout << "Buoc " << i<< ": ";
        sort(m,m+i+1);
        for (int  j = 0; j <= i; j++)
        {
            cout << m[j]<< " ";
        }
        cout <<endl;
    }
    
    
    return 0;
}
