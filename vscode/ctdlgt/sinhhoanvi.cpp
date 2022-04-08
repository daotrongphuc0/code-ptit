#include <bits/stdc++.h>
using namespace std;
int m[10];
int n;
void swap(int &a,int &b){
    int tmp =a ; a= b; b = tmp;
}
void xem(){
    for (int i = 0; i < n; i++)
    {
        cout << m[i] ;
    }
    cout << " ";
}
void khoitao(){
    int j =n ;
    for (int i = 0; i < n; i++)
    {
        m[i] = j;
        j--;
    }
    
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        bool cauhinhcuoi = false;
        khoitao();
            xem();
            for (int i = n-1; i >0; i--)
            {
                if(m[i] < m[i-1]) {
                    for (int j = n-1; j >= i ; j--)
                    {
                        if(m[j] < m[i-1]){
                        swap(m[i-1],m[j]);   
                        break; 
                        }
                    }
                    for(int j = n - 1; j > ((n - 1 + i) / 2); j--)
                    {
                        int temp = m[i + n - 1 - j];
                        m[i + n - 1 - j] = m[j];
                        m[j] = temp;
                    }
                    xem();
                    i = n;
                   
                }
            }
        cout <<endl;
        } 
    return 0;
}
