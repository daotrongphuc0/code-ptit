#include <bits/stdc++.h>
using namespace std;
int luythuaduoi(int n){
    int a =1;
    for (int i = 0; i < n; i++)
    {
        a *= 2;
        if(a> 0) a %= 10;
    }
return a;  
}
int main(){
    int t;
    cin >> t;
    while (t--){
        string n;
        cin >> n;
        long long so =0 ;
        int k =0;
        for (int i = n.size()-1; i >= 0; i--)
        {
           if(n.at(i) == '1'){
               so += luythuaduoi(k);
               if(so >= 10 ) so %= 10;
           } 
            k++;
            
        }
        if (so % 5 == 0) cout << "Yes"<< endl;
        else cout << "No" << endl;
    }
    return 0;
}
