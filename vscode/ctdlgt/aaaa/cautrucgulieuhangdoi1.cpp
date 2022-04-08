#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int q,val=0;
        queue<int>a;
        cin>>q;
        while(q--){
            int so;
            cin>>so;
            if(so==1) cout<<a.size()<<"\n";
            else if(so==2) (a.size()>0)? cout<<"NO\n" : cout<<"YES\n";
            else if(so==3) {
                  int n; cin>>n;
                  a.push(n);
            //      cout<<"\n";
            }
            else if(so==4 && a.size()>0) {
                    a.pop();
            //        cout<<"\n";
            }
            else if(so==5) (a.size()>0)? cout<<a.front()<<"\n":cout<<-1<<"\n";
            else if(so==6) (a.size()>0)? cout<<a.back()<<"\n":cout<<-1<<"\n";
            val=so;
        }
    //    if(val==3||val==4) cout<<"\n";
    }
}