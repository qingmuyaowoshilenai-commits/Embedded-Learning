#include <bits/stdc++.h>
using namespace std;
bool visted[10][10];
const int dx[4]={0,1,0,-1};
const int dy[4]={1,0,-1,0};
int ans=0;
int n,m,t,sx,sy,fx,fy;
void dfs(int x,int y)
{
    if(x==fx&&y==fy){ans++;return;}
    for(int i=0;i<4;i++)
    {
       int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=1&&ny>=1&&nx<=n&&ny<=m&&(!visted[nx][ny]))
        {
            visted[nx][ny]=1;
            dfs(nx,ny);
            visted[nx][ny]=false;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
cin>>n>>m>>t>>sx>>sy>>fx>>fy;
    for(int i=0;i<t;i++)
    {int bx,by;
        cin>>bx>>by;
     visted[bx][by]=1;
    }
   visted[sx][sy]=1;
    dfs(sx,sy);
    cout<<ans;
    return 0;
}
