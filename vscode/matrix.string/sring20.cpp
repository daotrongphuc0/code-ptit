#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,dem=0,tong=0;
    cout<< "N = ";
    cin >> n;
    cout<< "Cac uoc so:";
    for(int i =n;i>0;i--){
    	if(n%i==0){
    		dem++;
    		tong +=i;
    		cout<<" "<<i;
		}
	}
	cout<<endl<<"Trung binh cong cac uoc so = "<< int(tong/dem);
    return 0;
}
