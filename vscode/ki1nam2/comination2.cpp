#include <bits/stdc++.h>
using namespace std;
int gt(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * gt(n - 1);
    }
}
int main(){
    int p = pow(10, 9) + 7,  n, r, kq;
    cin >> n;
    cin >> r;
    kq = (gt(n) / (gt(n - r) * gt(r))) % p;
    cout << kq;
}
