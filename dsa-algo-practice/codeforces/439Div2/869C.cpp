#include <bits/stdc++.h>
#define mod 998244353
#define MAX 5007
using namespace std;
int p[MAX][MAX];
int pre[MAX];
int solve(int a, int b)
{
	int res = 0;
	for (int i = 0; i <= min(a,b); ++i)
	{
		int del = pre[i];
		del = (1LL*del*p[a][i])%mod;
		del = (1LL*del*p[b][i])%mod;
		res = (res + del)%mod;
	}
	return res;
}
int main(int argc, char const *argv[])
{
	int a,b,c;
	cin>>a>>b>>c;
	memset(p,0,sizeof(p));
	p[0][0] = 1;
	for (int i = 1; i < MAX; ++i)
	{
		p[i][0] = 1;
		for(int j = 1;j <= i; j++)
			p[i][j] = (p[i-1][j-1]+p[i-1][j])%mod;
	}
	memset(pre,0,sizeof(pre));
	pre[0] = 1;
	for (int i = 1; i < MAX; ++i)
		pre[i] = (1LL*pre[i-1]*i)%mod;
	int ans = 1;
	ans = (1LL*ans*solve(a,b))%mod;
	ans = (1LL*ans*solve(b,c))%mod;
	ans = (1LL*ans*solve(c,a))%mod;
	cout<<ans;
	return 0;
}