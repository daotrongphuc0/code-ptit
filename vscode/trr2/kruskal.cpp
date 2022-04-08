#include <bits/stdc++.h>
using namespace std;
struct canh
{
    int ts;
    int n1;
    int n2;
};
class dothi
{
private:
    int n,m[100][100],dem,atree[100][100],dh;
    canh graph[100],tree[100];
public:
   bool chuaxet[100];
   void readdata();
   void khoitao();
   void DFStree(int u);
   void sort();
   void kruskal();
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
    cin >> n;dem =0;
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
    sort();
    for (int i = 0; i <=dem; i++)
    {
        cout << graph[i].n1<< " "<< graph[i].n2<<" "<<graph[i].ts<< endl;
    }
    
    
}
void dothi::khoitao() {
    for (int i = 1; i <= n; i++)
    {
        chuaxet[i] =true;
    }
    
}
void dothi::DFStree(int u)
{
    chuaxet[u] =false;
    for (int i = 1; i <=n; i++)
    {
        if(atree[u][i] ==1 && chuaxet[i]) DFStree(i);
    }
    
}

void dothi::kruskal()
{
    dh =0;
    int demtree =0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            atree[i][j] =0;
        }
        
    }
    sort();
    for (int i = 1; i <= dem; i++)
    {
        int n1= graph[i].n1,n2 =graph[i].n2;
        khoitao();
        DFStree(n1);
        if(chuaxet[n2]) 
        {
            demtree++;
            tree[demtree].n1 =n1;
            tree[demtree].n2 =n2;
            dh +=graph[i].ts;
            atree[n1][n2] =1;
            atree[n2][n1] =1;
        }
        
    }
    if(demtree ==n-1)
        {
            cout << "dH = "<<dh<<endl;
            for (int i = 1; i <= demtree; i++)
            {
                cout << tree[i].n1<< " "<<tree[i].n2<<endl;
            }
            
        }
    
    
}


int main(){
    dothi g;
    g.readdata();
    g.kruskal();
    return 0;
}
