#include <bits/stdc++.h>
using namespace std;
struct canh {
    int n1;
    int n2;
};
int main(){
    int t; cin >> t;
    while(t--)
    {
        int v,e,dbd;
        cin >> v>>e>> dbd;
        canh dsc[e];
        for (int  i = 0; i < e; i++)
        {
            cin >> dsc[i].n1>> dsc[i].n2;
        }
        bool chuaxet[v+1];
        for (int i = 1; i <=v; i++)
        {
            chuaxet[i] =true;
        }
        
        //BFS
        queue<int> q;
        q.push(dbd);
        chuaxet[dbd] =false ;
        while(!q.empty())
        {
            int x =q.front();
            cout << x<< " ";
            q.pop();
            for (int i = 0; i <e; i++)
            {
                if(dsc[i].n1 ==x && chuaxet[dsc[i].n2])
               {
                    q.push(dsc[i].n2);
                    chuaxet[dsc[i].n2] =false;
               }
            }
            
        }
        cout <<endl;
    }
    return 0;
}
