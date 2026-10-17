#include <bits/stdc++.h>
using namespace std;
int n,r;
int a[25];
void dfs(int pos,int last) 
{
	if(pos>r)
	{
		for(int i=1;i<=r;i++)
		{
			cout<<setw(3)<<a[i];
		}
		cout<<endl;
		return;
	}
	for(int i=last+1;i<=n;i++)
	{
		a[pos]=i;
		dfs(pos+1,i);
	}
	
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
cin>>n>>r;
dfs(1,0);
   
    return 0;
}
