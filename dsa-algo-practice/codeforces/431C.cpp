#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long dp[101][2];
long long n,k,d;
long long fun(long long a,long long x)
{
	if(a<0)
		return 0;
	if(a>=0 && dp[a][x]!=-1)
		return dp[a][x];
	if(a==0 && x==1)
		{dp[a][x]=1;return 1;}
	if(a==0 && x==0)
		{dp[a][x]=0;return 0;}
	long long sum=0;
	for(long long i=1;i<=k;i++)
		sum=( sum + fun ( a-i, ( x || (i>=d) ) ) )%mod;
	dp[a][x]=sum;
	return sum;
}
int main()
{
	cin>>n>>k>>d;
	memset(dp,-1,sizeof(dp));
	cout<<fun(n,0);
}
