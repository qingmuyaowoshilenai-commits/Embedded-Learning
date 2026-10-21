#include <bits/stdc++.h>
using namespace std;
int n,k;
int ans=0;
void dfs(int last,int sum, int cnt)
{
	if(cnt==0)
	{
		if(sum==0)ans++;
		return;
	}
	for(int i=last;i*cnt<=sum;i++)
	{
		dfs(i,sum-i,cnt-1);
	}	
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cin>>n>>k;
	dfs(1,n,k);
	cout<<ans<<'\n';
   
    return 0;
}
