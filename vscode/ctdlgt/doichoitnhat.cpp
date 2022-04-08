#include <bits/stdc++.h>
using namespace std;
int miniswap(int m[],int  n)
{
    int min,min_index,dem=0;
    for (int i = 0; i < n; i++)
    {
        min =m[i];
        min_index = i;
        for (int j = i+1; j < n; j++)
        {
            if(m[j]<min)
            {
                min =m[j];
                min_index =j;
            }
        }
        if(min_index!= i) {
            dem++;
            int tmp =m[i];
            m[i] = min;
            m[min_index] = tmp;
        }
        
    }
    return dem ;
}
int main(){
    int t ; cin >> t; 
    while(t--)
    {
        int n; cin >> n;
        int m[n];
        for (int  i = 0; i < n; i++)
        {
            cin >> m[i];
        }

        cout << miniswap(m,n)<<endl;
    }
    return 0;
}
