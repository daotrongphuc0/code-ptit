#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
  while(t--){
  string x,y;
  cin>>x>>y;
  int kt= max(x.size(),y.size())-min(x.size(),y.size());
  if(x.size() > y.size()) 
    for (int i = 0; i <kt; i++)
      y.insert(0,"0");
  if(x.size() < y.size()) 
    for (int i = 0; i < kt; i++)
      x.insert(0,"0");  
  string kq = "";
  int nho =0;
  int tam =0;
  string chuyen = "";
  for (int i = x.size()-1; i >= 0; i--)
  {
    tam= (x.at(i)-48) + (y.at(i) -48) + nho ;
    if(tam >= 10){ 
      nho =1;
      tam %= 10 ;}
    else nho = 0;
      chuyen = tam + 48;
    kq.insert(0,chuyen);
  }
  if(nho == 1) {
    kq.insert(0,"1");}
cout << kq <<endl;
}
return 0;
}
