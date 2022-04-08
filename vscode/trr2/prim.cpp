#include <bits/stdc++.h>
using namespace std;
int dinhbd;
struct canh
{
    int ts;
    int n1;
    int n2;
};
class dothi
{
private:
    int n,m[100][100],dem,dh;
    canh graph[100],tree[100];
public:
   bool chuaxet[100];
   void readdata();
   void khoitao();
   void sort();
   void prim(int  u);
};
void dothi::sort()
{
    int i, j;
   for (i = 2; i <= dem; i++)
   {
       canh key = graph[i];
       j = i-1;
       while (j >= 0 && graph[j].ts > key.ts)
       {
           graph[j+1] = graph[j];
           j = j-1;
       }
       graph[j+1] = key;
   }
    
    
}
void dothi::readdata()
{
    cin >> n>>dinhbd;dem =0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> m[i][j];
            if(i<j &&  m[i][j] >0)
            {
                dem++;
                graph[dem].ts =m[i][j];
                graph[dem].n1 =i;
                graph[dem].n2 =j;    
            }
        }
        
    }
    // for (int i = 1; i <=dem ; i++)
    // {
    //     cout << graph[i].n1<<graph[i].n2<< "   ";
    // }
    // cout <<endl;sort();
    // for (int i = 1; i <=dem ; i++)
    // {
    //     cout << graph[i].n1<<graph[i].n2<< "   ";
    // }
}
void dothi::khoitao() {
    for (int i = 1; i <= n; i++)
    {
        chuaxet[i] =true;
    }
    
}


void dothi::prim(int u)
{
    khoitao();
    dh=0;
    int demtree=0;
    chuaxet[u] =false;
    sort();
    for (int i = 0; i < dem; i++)
    {
        for (int j = 1; j <=dem; j++)
        {
            if(chuaxet[graph[j].n1] != chuaxet[graph[j].n2]){
                chuaxet[graph[j].n1] =false;
                chuaxet[graph[j].n2] =false;
                dh += graph[j].ts;
                demtree++;
                tree[demtree] = graph[j];
            }
        }
        
    }
    cout << "dH = " << dh<<endl;
    for (int i = 1; i <=demtree; i++)
    {
        cout << tree[i].n1<< " "<<tree[i].n2<<endl;
    }
    
    
    
}


int main(){
    dothi g;
    g.readdata();
    g.prim(dinhbd);
    return 0;
}
