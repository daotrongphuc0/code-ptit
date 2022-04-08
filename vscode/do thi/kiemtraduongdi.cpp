#include <bits/stdc++.h>
using namespace std;
struct canh {
    int n1;
    int n2;
};
#define MAX 1005
bool chuaxet[MAX];
int n,m;
canh dsc[MAX];

void BFS(int dbd){
    queue<int> q;
        q.push(dbd);
        chuaxet[dbd] =false ;
        while(!q.empty())
        {
            int x =q.front();
         //   cout << x<< " ";
            q.pop();
            for (int i = 0; i <m; i++)
            {
                if(dsc[i].n1 ==x && chuaxet[dsc[i].n2])
               {
                    q.push(dsc[i].n2);
                    chuaxet[dsc[i].n2] =false;
               }
               if(dsc[i].n2 ==x && chuaxet[dsc[i].n1])
               {
                    q.push(dsc[i].n1);
                    chuaxet[dsc[i].n1] =false;
               }
            }
            
        }
}
int main(){
    int t; cin >> t;
    while(t--)
    {
        int q;
        cin >> n>>m;
        for (int i = 0; i < m; i++)
        {
            cin >> dsc[i].n1>>dsc[i].n2;
        }
        cin >>q;
    
        for (int i = 0; i < q; i++)
        {
            int a,b;
            cin >> a >> b;
            for (int j = 1; j <=n; j++)
            {
                chuaxet[j] =true;
            }
            BFS(a);
            if(chuaxet[b] ==false ) cout << "YES"<<endl;
            else cout << "NO" <<endl;
        }
        
        
        
    }
    return 0;
}
