

#include <bits/stdc++.h>
using namespace std;
void sontmax(long x){
    long max;
    for (int i = 2; i <=sqrt(x); i++)
    {
        while(x%i == 0){
        max = i;
        x /=i;
        }
    }
    if( x != 1) cout << x <<endl;
    else cout<< max<<endl;
}
int main(){
    long n;
    cin >> n;                                   
    for (int i = 0; i <n; i++)
    {
        long x;
        do
        {
            cin >> x;   
        } while (x<2||x>10000000000);
         sontmax(x);        
    }
    return 0;
}