#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t; 
    t++;
    while(t--){
    
      char a[2] = " ";
      char *s = new char[50];
      gets(s);
      char *p = strtok(s,a);
      int dem =0;
      while(p != NULL){
          dem ++;
          p =strtok(NULL,a);
      }
      if(dem != 0) cout << dem << endl;
 }
    return 0;
}
