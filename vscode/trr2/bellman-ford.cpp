#include <iostream>
#define MAX 100
#define INF 1000000
using namespace std;
class   dothi{
    int         n, c[MAX][MAX];
    public:
    bool        chuaxet[MAX];
    int         s, truoc[MAX], d[MAX];
    void        readdata();
    void        init(int s);
    void        bellman_ford(int s);
};
void    dothi::readdata(){
    cin>>n>>s;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++){
            cin>>c[i][j];
            if(c[i][j]==0)
                c[i][j]=INF;
        }
}
void    dothi::init(int s){
    for(int i=1; i<=n; i++){
        d[i]=c[s][i];
        truoc[i]=s;
        chuaxet[i]=true;
    }
    chuaxet[s] =false ;
}
void dothi::bellman_ford(int s)
{
    init(s);
    d[s] =0;
    for (int i = 0; i < n-2; i++)
    {
        for (int v = 1; v <=n; v++)
        {
            if(chuaxet[v])
            {
                for (int u = 1; u <=n; u++)
                {
                    if(d[v] > d[u] +c[u][v] ) 
                    {
                        d[v] = d[u] +c[u][v];
                        truoc[v] =u;
                    }
                }
                
            }
        }
        
    }
    for(int t=1; t<=n; t++)
        if(d[t]==INF){
            cout<<"\nK/c "<<s<<" -> "<<t<<" = INF;";
        }
        else{
            cout<<"\nK/c "<<s<<" -> "<<t<<" = "<<d[t]<<";";
            cout<<"  "<<t<<" <- ";
            int truoctmp=truoc[t];
            while(truoctmp!=s){
                cout<<truoctmp<<" <- ";
                truoctmp=truoc[truoctmp];
            }
            cout<<s;
        }
    
}
int main()
{
    dothi   g;
    g.readdata();
    g.bellman_ford(g.s);
}