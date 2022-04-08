#include <bits/stdc++.h>
using namespace std;
int a[100];
int buoc=1,n;
void xem(){
    cout << "Buoc " << buoc << ": " ;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout <<endl;
}
void swap(int &a, int &b){
    int x =a;a=b;b=x;
}
int mi(int a,int b){
    if(b< a ) return 0;
    //int min= 101;
    int vt =a;
    for (int i = a+1; i < b; i++)
    {
    if(a[vt] > a[i]) vt =i;
    }
    return vt;
    
}
int main(){
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        int kt = mi(i+1,n);
        swap(a[i],a[kt]);
        xem();
        buoc++;
    }
    
    
    return 0;
}
