#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int n;
int m[30][30];
int used[30];
int truoc[30];
int truoc1[30];

void DFS(int k)
{
   stack<int> s;
   used[k] =1;
   s.push(k);
   while(!s.empty()){
       int x =s.top();
       s.pop();
       for(int i=1;i<=n;i++){
           if(m[x][i] ==1&& used[i] ==0){
               used[i]= 1;
               s.push(x);
               s.push(i);
               truoc[i]=x;
               break;
           }
       }
       
   }
   
}


void khoitao()
{
    for(int i=1;i<=n;i++) {
        used[i]=0;truoc[i]=0;
    }
}

void khoitao1()
{
    for(int i=1;i<=n;i++) {
        used[i]=0;truoc1[i]=0;
    }
}


void BFS(int k)
{
    queue<int> s;
    s.push(k);
    used[k]=1;
    while(!s.empty()){
        int x =s.front();
        s.pop();
        for(int i=1;i<=n;i++){
            if(m[x][i] ==1 && used[i] ==0){
                used[i] =1;
                s.push(i);
                truoc1[i] =x;
            }
        }
    }
}
int main()
{
    cin >> n;
    int a,b;
    cin >> a>> b;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++) cin >> m[i][j];
    khoitao();
    DFS(a);
    if(truoc[b] != 0) {
        cout << "DFS path: "<< b<<" ";
        int u =truoc[b];
        while(u!= a){
            cout << u<< " ";
            u = truoc[u];
        }
        cout << a<< endl;
    }
    khoitao1();
    BFS(a);
    if(truoc1[b] != 0) {
        cout << "BFS path: "<< b<<" ";
        int u =truoc[b];
        while(u!= a){
            cout << u<< " ";
            u = truoc1[u];
        }
        cout << a<< endl;
    }
    if(truoc1[b]==0 && truoc[b]==0) cout << "no path" << endl;
    return 0;
}
