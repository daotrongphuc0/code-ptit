#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
  while(t--){
  string x,y;
  fflush(stdin);
  getline(cin,x);
  fflush(stdin);
  getline(cin ,y);
  int kt= max(x.size(),y.size())-min(x.size(),y.size());
  if(x.size() > y.size()) 
    for (int i = 0; i <kt; i++)
      y.insert(0,"0");
  if(x.size() < y.size()) 
    for (int i = 0; i < kt; i++)
      x.insert(0,"0");  
 char kq[x.size()];
 int ms =1;
 for (int i = 0; i < x.size(); i++)
 { 
   if(x.at(i) > y.at(i)) {ms =1; break;}
   if(x.at(i) < y.at(i)) {ms =0; break;}
 }
if(ms == 0){
  string doi;
  doi = x;
  x = y;
  y = doi ;
}
  int nho =0;
  int tam =0;
  for (int i = x.size()-1; i >= 0; i--)
  {
    if(x.at(i) -  nho >= y.at(i)){
       tam= (x.at(i)-48) - (y.at(i) -48) - nho ;
       nho = 0;
    }
    else{
       tam =  (x.at(i)-48 ) - (y.at(i)-48) - nho + 10;
       nho =1;
    }
   kq[i] = tam +'0';
  }
for (int i = 0; i <x.size(); i++)
{
  cout<<kq[i];
}
cout << endl;
}
}