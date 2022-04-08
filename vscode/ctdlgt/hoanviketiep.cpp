#include <bits/stdc++.h>
using namespace std;
int m[10];
int n;
void swap(int &a,int &b){
    int tmp =a ; a= b; b = tmp;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        bool kt = false ;
        cin >> n;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i] ;
        }
        
        for (int i = n-1; i >0; i--)
        {
            if(m[i] > m[i-1]) {
                for (int j = n-1; j >= i ; j--)
                {
                    if(m[j] > m[i-1]){
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
                for (int j = 0; j < n; j++)
                {
                    cout << m[j] << " ";
                }
                kt  = false ;   
                break ;             
            }
            else kt = true ;
        }
        if(kt)
            for (int j = 0; j < n; j++)
                {
                    cout << j+1 << " ";
                }
        cout <<endl;
    } 
    return 0;
}
