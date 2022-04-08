#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,a1,b1;
    cin>>a>> b;
    a1=a;b1=b;
    for(int i=0;i<a1.length();i++)
    if(a1.at(i)=='6') a1.at(i) ='5';
    for(int i=0;i<b1.length();i++)
    if(b1.at(i)=='6') b1.at(i) ='5';
    int x,y;
    stringstream(a1) >> x;
    stringstream(b1) >> y;
    cout << x+y<<" ";
    for(int i=0;i<a1.length();i++)
    if(a1.at(i)=='5') a1.at(i) ='6';
    for(int i=0;i<b1.length();i++)
    if(b1.at(i)=='5') b1.at(i) ='6';
    stringstream(a1) >> x;
    stringstream(b1) >> y;
    cout << x+y;
    return 0;
}
