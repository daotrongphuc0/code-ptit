#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long cost=0;
        priority_queue<int, vector<int>, greater<int> > m;
        for (int i = 0; i < n; i++)
        {
            int tmp ;
            cin >> tmp;
            m.push(tmp);
        }
        while(m.size() >1)
        {
            int a =m.top();
            m.pop();
            int b =m.top();
            m.pop();
            cost += a+b;
            m.push(a+b);

        }
        cout <<cost<< endl;
    }

    return 0;
}
