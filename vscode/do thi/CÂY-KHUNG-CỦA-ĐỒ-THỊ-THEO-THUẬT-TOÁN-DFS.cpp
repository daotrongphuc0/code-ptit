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
        //DFS 
        int kq[v+5];
        stack<int> s;
        s.push(dbd);
        chuaxet[dbd] = false ;
        while(!s.empty())
        {
            int x = s.top();
            s.pop();
            if(chuaxet[x]) cout << x+1  << " ";
        }
    return 0;
}
