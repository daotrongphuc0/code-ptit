#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    struct canh {
        int n1,n2;
    };
    while(t--)
    {
        int n ,k;
        cin  >> n>>k;
        canh dscanh[k];
        for (int i = 0; i < k; i++)
        {
            cin >> dscanh[i].n1>> dscanh[i].n2;
        }
        for (int i = 1; i <=n; i++)
        {
            cout << i<<": ";
            for (int  j = 0; j < k; j++)
            {
                if(dscanh[j].n1 ==i) cout << dscanh[j].n2<< " ";
                if(dscanh[j].n2 ==i) cout << dscanh[j].n1<< " ";
            }
            cout <<endl;
        }
        
        
    }
    return 0;
}
