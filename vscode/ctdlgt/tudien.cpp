#include <bits/stdc++.h>
using namespace std;
bool tim(char matran[10][10],char dic,int m,int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matran[i][j] == dic) return true;
        }
        
    }
    return false ;
}
'
int main(){
    int t;cin >> t;
    while(t--)
    {
        int k,m,n;
        cin >> k>> m>> n;
        cin .ignore();
        string dic[k];
        char matran[10][10];
        for (int i = 0; i < k; i++)
        {
            cin >> dic[k];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matran[i][j];
            }
            
        }
        for (int i = 0; i < k; i++)
        {
            bool ok = true ;
            for (int j = 0; j < dic[i].length(); j++)
            {
                if(!tim(matran, dic[i].at(j),m,n)) {ok = false ;break;}
            }
            if(ok) cout << dic[i]<< " ";
        }
        

        
        
    }
    return 0;
}
