#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        queue<int> qu;
        int n; cin >> n;
        while(n--)
        {
            int a; cin >> a;
            if(a == 1) cout << qu.size();
            if(a== 2) {
                if(!qu.empty()) cout << "NO"<< endl;
                else cout << "YES"<<endl;
            }
            if(a ==3)
            {
                int x; cin >> x;
                qu.push(x);
            }
            if(a== 4)
            {
                if(!qu.empty()) qu.pop(); 
            }
            if(a==5)
            {
                if(!qu.empty()) cout << qu.front()<<endl;
            }
            if(a==6)
            {
                if(!qu.empty()) cout << qu.back()<<endl;
            }
        }
    }
    return 0;
}
