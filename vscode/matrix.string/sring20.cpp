#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;cin.ignore();
    while(t--){
      //  cin.ignore();
      string s;
      getline(cin,s);
      istringstream t(s);
      vector<string> v;
      while(t >> s) v.push_back(s);
      for(int i = v.size() - 1; i >= 0;i--)
       cout << v.at(i) << " ";
       cout <<endl;
    }
    return 0;
}
