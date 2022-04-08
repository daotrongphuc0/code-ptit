#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int n =s.length();
        int max =0,chiso=-1;
        for (int i = 0; i < n; i++)
        {
            int dem =0;
            for (int j = 0; j < n; j++)
            {
                if(s.at(j) == s.at(i)) dem ++;
            }
            if(dem > max ) max =dem;
            
        }
        //if(max-1 > n-max ) cout << -1<<endl;
        //else cout <<1<< endl;
        
    }
    return 0;
}
