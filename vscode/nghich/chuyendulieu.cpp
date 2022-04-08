#include <bits/stdc++.h>
using namespace std;

int main(){
    string kq ="";
    while(1)
    {
        
        string s;
        getline(cin,s);
        kq += "cout << \" ";
        kq += s;
        kq +=  " \" <<endl;\n";
        kq += "Sleep(100);";
        
    }
    cout << kq;
    return 0;
}
