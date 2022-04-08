#include <bits/stdc++.h>
using namespace std;
long long m[100];

void chia (int n,long long k)
{
    if(n ==1) {cout << "A"<< endl; return ;}
    if(n ==2) {cout << "B"<< endl; return ;}
    if(k> m[n-2]) chia(n-1,k-m[n-2]);
    else chia(n-2,k);

}
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long k;
        cin >> n>> k;
        m[1]= 1;
        m[2]= 1;
        for (long long i = 3; i <= n; i++)
        {
            m[i] = m[i-2] + m[i-1];
        }
        chia(n,k); 
        
    }
    return 0;
}
