#include <bits/stdc++.h>
using namespace std;
"
int main(){
    int t; cin >> t;
    while(t--)
    {
        int k; cin >> k;
        cin.ignore();
        string s;
        cin >> s;
        int n =s.length();
        int m[n],chiso=0;
        for (int i = 0; i < n; i++)
        {
            int dem =0;
            for (int j = i+1; j < n; j++)
            {
                if(s.at(j) == s.at(i)){dem++;s.erase(j,1);}
            }
            m[chiso] =dem;chiso++;
            
        }
        for (int i = 0; i < k; i++)
        {
            int max =0;
            for (int j = 0; j < chiso; j++)
            {
                if(m[j] >max) max = m[j];
            }
            max--;
        }
        long long sum =0 ;
        for (int i = 0; i < chiso; i++)
        {
            sum += pow(m[i],2);
        }
        cout << sum <<endl;
        
    }
    return 0;
}
