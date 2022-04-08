#include<bits/stdc++.h>
using namespace std;


int main(){
    int q;
    cin>>q;
    deque<int>a;
    while(q--){
        string s;
        cin>>s;
        if(s=="PUSHBACK"){
            int res; cin>>res;
            a.push_back(res);
        }
        else if(s=="PUSHFRONT"){
            int res; cin>>res;
            a.push_front(res);
        }
        else if(s=="PRINTFRONT") (!a.empty())? cout<<a.front()<<"\n":cout<<"NONE\n";
        else if(s=="PRINTBACK")  (!a.empty())? cout<<a.back()<<"\n":cout<<"NONE\n";
        else if(s=="POPFRONT"&&!a.empty()) a.pop_front();
        else if(s=="POPBACK"&&!a.empty()) a.pop_back();
    }
}