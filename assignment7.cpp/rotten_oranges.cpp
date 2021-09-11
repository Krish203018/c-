#include <bits/stdc++.h> 
using namespace std; 
class fruit{
    public:
    int x,y,t;
    fruit(int a,int b,int c)
    {
        x=a;
        y=b;
        t=c;
    }
}
;
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0; i<n; i++){
            for (int j = 0; j < m; j++)
            {
                cin>>arr[n][m];
            }
            queue<fruit>q;
            for (int i = 0; i < n; i++)
            {
              for (int j = 0; j<m; j++)
              {
                  if (arr[i] == 2)
                  {
                     fruit f[i,j,0];
                     q.push(f);
                  }
                  
              }
              
            }
            int ans=0;
            while(!q.front)
            fruit f=q.front;
            int x=f.x;
            int y=f.y;
            int t= f.t;
            ans= max(ans,t);
            if()
        }
     
    }
	
	return 0; 
} 

