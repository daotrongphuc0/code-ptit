#include <bits/stdc++.h>
using namespace std;

int main(){
    string chuoi,bo;
    getline(cin,chuoi);
    fflush(stdin);
    getline(cin,bo);
   int vitri,soluong;
    soluong = bo.size();
        if(chuoi.find(bo) != -1){
           vitri = chuoi.find(bo);
           if(vitri == 0 )
               chuoi.erase(vitri,soluong+1);
           else chuoi.erase(vitri -1, soluong + 1);
        }
    cout<< chuoi ;    
    return 0;
}
