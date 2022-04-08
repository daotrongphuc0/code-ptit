#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,s;
    cin >> m >> s;
    if(m * 9 < s || (s == 0 && m > 1)){
        cout << "-1 -1" ;
        return 0;
    }
    int arrmax[m];
    int arrmin[m];
    for (int  i = 0; i < m; i++)
    {
        arrmax[i] = 0;
        arrmin[i] = 0;
    }
    int lgh = s;
    for (int i = 0; i < m; i++)
    {
        if(lgh > 9){ arrmax[i] = 9; lgh -= 9;}
        else {
            arrmax[i] = lgh;
            break ;
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     cout << arrmax[i] ;
    // }
    // cout << " ";
    arrmin[0] =1;
    lgh = s -1;
    for (int i = m-1; i >= 0; i--)
    {
     //   if(i == 0 && lgh >0) lgh ++;
        if(lgh > 9){ arrmin[i] = 9 ; lgh -= 9;}
        else { arrmin[i] += lgh ; break;}
       // if(i == 0) arrmin[0] += 1;
    }
    for (int i = 0; i < m; i++)
    {
        cout << arrmin[i];
    }
    cout << " ";
    for (int i = 0; i < m; i++)
    {
        cout << arrmax[i] ;
    }
    return 0;
}
