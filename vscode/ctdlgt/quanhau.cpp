#include <iostream>
using namespace std;
int n, X[11];
bool cot[21], xuoi[21], nguoc[21];
int kq = 0 ;
int matran[9][9];
int ma =0,count=0;
void quaylui(int i)
{
    for(int j=1; j<=n; j++)
    {
       if(cot[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){
       count  += matran[i][j];
       X[i]=j; 
       cot[j]=0;
       xuoi[i-j+n]=0; 
       nguoc[i+j-1]=0; 
       if(i==n) {kq++; ma= max(ma,count);
	   } 
       else quaylui(i+1); 
       cot[j]=1;
       xuoi[i-j+n]=1;
       nguoc[i+j-1]=1; 
       count  -= matran[i][j];
    }
}
return;
}
int main() {
    int t; cin >> t;
    while(t--){
    	ma=0;
        kq=0;
        n=8;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> matran[i][j];
            }
            
        }
        
        for(int j=1; j<=2*n; j++){ cot[j]=1; xuoi[j]=1; nguoc[j]=1; }
        quaylui(1); 
        if(n<=3) kq =0;
        if(n==1) kq=1;
        if(kq!=0) cout << ma <<endl;
       // cout << kq << endl;
    }
return 0;
}
