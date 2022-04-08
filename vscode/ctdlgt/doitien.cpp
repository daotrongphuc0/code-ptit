#include <bits/stdc++.h>
using namespace std;
int tien[11];
int main(){
    int t;
    cin >> t;
    tien[1]=1;
    tien[2]=2;
    tien[3]=5;
    tien[4]=10;
    tien[5]=20;
    tien[6]=50;
    tien[7]=100;
    tien[8]=200;
    tien[9]=500;
    tien[10]=1000;
    while(t--)
    {
        int sum,dem=0;
        cin >> sum;
        while(sum>0)
        {
            for (int i = 10; i >0; i--)
            {
                if(sum >= tien[i]) {
                    dem++;
                    sum -= tien[i];
                    break;
                }
            }
            
        }
        cout << dem << endl;

    }
    return 0;
}
