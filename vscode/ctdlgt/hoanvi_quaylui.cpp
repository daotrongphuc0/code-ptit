#include <bits/stdc++.h>
using namespace std;
int used[15];
char m[15];
char kq[15];
int n;
void xem()
{
    for (int i = 0; i < n; i++)
    {
        cout << kq[i];
    }
    cout <<" ";
    
}
void khoitao()
{
    for (int i = 0; i < n; i++)
    {
        used[i]=0;
    }
    
}
void dequy(int k)
{
    if(k==n) xem();
    for (int i = 0; i <n; i++)
    {
        if(used[i]==0){
            used[i]=1;
            kq[k] =m[i];
            dequy(k+1);
            used[i]=0;
        }
    }
    
}

int main(){
    int t;cin >> t;cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        n =s.length();
        copy(s.begin(),s.end(),m);
        m[n] ='\0';
        khoitao();
        dequy(0);
        cout <<endl;

    }
    return 0;
}
