#include <bits/stdc++.h>
using namespace std;
int  n,m[101],s;
bool ok =false ;
int sum=0;
int used[101];
void  Find(int k)
{
if(used[k] ==1){
    for (int i = 1; i >= 0; i--)
    {
        s = s +  m[k]*i;
        if(k==n-1){
            if(s == sum) ok =true;
        }
        else if(s <= sum) Find(k+1);
        if(ok) break;
        s =s - m[k]*i;
    }
}
else if(k <n-1) Find(k+1);
}
void khoitao(){
    for (int i = 0; i < n-1; i++)
    {
        used[i] =0;
    }
    used[n-1] =1;
}
void sinh(){
    used[n-1]++;
    for (int i = n-1; i >=0 ; i--)
    {
        if(m[i] >1) {
            m[i] =0;
            m[i-1]++;
        }
    }
    
}
void tong(){
    sum =0;
    for (int i = 0; i < n; i++)
    {
        if(used[i] ==1) sum += m[i];
    }
    return;
}
int main(){ 
    int t; cin >> t; 
    while(t--)
    {
        cin >> n;
        sum =0;
        for (int i = 0; i < n; i++)
        {
            cin>> m[i];sum += m[i];
        }
        khoitao();
        for (int i = 0; i < pow(2,n)-1; i++)
        {
            sinh();
            tong();  
            if(sum&1) ok =false;
            else {
            sum = sum /2;
            ok =false ;
            s=0;
            Find(0);
            if(ok) break;
        }
        }
        
        if(ok) cout << "Yes" << endl;
        else cout << "NO" << endl;

        
    }
    return 0;
}
