#include<bits/stdc++.h>
using namespace std;
int a[15][15];
bool used[15][15]={false};

void Try(int i,int j,int n,bool &ok,string way)
{
	if((a[0][0]==0) || (a[n-1][n-1]==0)){
		ok = false;
		return;
		}
	if(i==n-1 && j==n-1){
		ok = true;
		cout<<way<<" ";
        }
	if(a[i+1][j]==1 && i+1<=n-1 && used[i+1][j]==false ){
		used[i][j]=true;
	    Try(i+1,j,n,ok,way+"D");
	    used[i][j]=false;
	    }
	if(a[i][j-1]==1 && j-1>=0 && used[i][j-1]==false){
	    used[i][j]=true;
	    Try(i,j-1,n,ok,way+"L");
	    used[i][j]=false;
	    }
	if(a[i][j+1]==1 && j+1<=n-1 && used[i][j+1]==false){
		used[i][j]=true;
		Try(i,j+1,n,ok,way+"R");
		used[i][j]=false;
		}
	if(a[i-1][j]==1 && i-1>=0 && used[i-1][j]==false){
		used[i][j]=true;
	    Try(i-1,j,n,ok,way+"U");
	    used[i][j]=false;
	    }
}

int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		string way;
		bool ok = false;
		for(int i=0;i<n;i++){
		   for(int j=0;j<n;j++){ 
		      cin>>a[i][j];
		      used[i][j]=false;
		      }
		    }
	    Try(0,0,n,ok,way);
        if(!ok) cout<<-1;
		cout<<endl;
		}
	}