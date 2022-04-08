#include <bits/stdc++.h>
using namespace std;
void daocho(int &a,int &b){
    int tmp =a;
    a= b;
    b=tmp;
}
    

int dodai(int n){
    int dem =0;
    while(n/10!=0){
        dem++;
        n /= 10;
    }
return dem+1 ;
}
int layso(int a, int vitri){
    if(vitri>dodai(a)) return -1;
    a /= pow(10,dodai(a)-vitri);
    return a%10;
}
int sosanh(int a,int b){
    int mi = min(dodai(a),dodai(b));
    for (int i = 1; i <= mi; i++)
    {
        if(layso(a,i)<layso(b,i)) return 0;
        if(layso(a,i)>layso(b,i)) return 1;
    }
    if(mi == dodai(a)){
        if(layso(b,mi+1) > layso(b,mi)) return 0;
        if(layso(b,mi+1) < layso(b,mi)) return 1;
    }
    else return 0;
//     if(     ( mi == dodai(a))    &&      (layso(b,mi+1) > layso(b,mi))       ) return 0;
//    // else return 1;
//     if((mi == dodai(a)    &&      (layso(b,mi+1) < layso(a,mi))      ) return 1;
return 0     ;                                                                                                                                                                                               ;
}
int main(){
     int t; cin >> t;
    while(t--){
    int  n;
    cin >> n;
    int mang[n];
    for (int i = 0; i < n; i++){
        cin >> mang[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(sosanh(mang[i],mang[j])==0) daocho(mang[i],mang[j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << mang[i];
    }
    cout << endl;
    }
    
    return 0;
}