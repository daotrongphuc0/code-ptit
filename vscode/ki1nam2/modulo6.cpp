#include <bits/stdc++.h>
using namespace std;
int so(char a){
    return a -'0';
}
char chu(int a){
    return (char)(a +48);
}
string sum(string a,string b){
     string s ="";
    int l1 =a.length() , l2 = b.length();
    if(l1 > l2) b.insert(0,l1-l2,'0');
    if(l1 < l2) a.insert(0,l2-l1,'0');
    int nho =0;
    for(int i =a.length()-1;i>= 0;i--){
        nho = so(a[i]) + so(b[i]) +nho;
        s.insert(0,1,chu(nho%10));
        nho /=10;
    }
    if(nho != 0 ) s.insert(0,1,chu(nho));
    return s;
}
string nhandon(char a, string b){
    if(a == '0') return "0";
    string s ="";
    int nho =0;
    for(int i = b.length()-1;i>= 0;i--){
        nho = so(a) * so(b[i]) +nho;
        s.insert(0,1,chu(nho%10));
        nho /= 10;
    }
    if(nho !=0) s.insert(0,1,chu(nho));
    return s;
}
string nhan(string a,string b){
    if(a == "0" || b== "0" ) return "0";
    string res ="";
    int l = a.length();
    string s[l];
    for(int i =l-1;i >= 0; i-- ){
        s[i] = nhandon(a[i],b);
        s[i].insert(s[i].length(),l-i-1,'0');
        res =sum( res, s[i]);
    }
    return res;
}
string luythua(string a,long long b){
    for(int i= 1;i<b;i++) a = nhan(a,a);
    return a;
}
long long modulo(string a, long long b){
    long long nho=0;
    for(int i =0;i < a.length();i++ ){
        nho = (nho*10 + (a[i]- '0')) % b; 
    }
    return nho;
}
int main(){
    int t; cin >>t;
    while(t--){
        string s;
        long long a ,b;
        cin >>s >> a>> b;
        s = luythua(s,a); 
        cout << modulo(s,b) <<endl;
    }
    return 0;
}
