#include <bits/stdc++.h>
using namespace std;
int brr[][2]={{0,-1},{-1,0},{1,0},{0,1}};
int main()
{
	int n,m,i,j,a,b,ans,k;
	cin>>n>>m;
	char arr[n][m];ans=0;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>arr[i][j];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(arr[i][j]=='W')
			for(k=0;k<4;k++)
			{
				a=i+brr[k][0];
				b=j+brr[k][1];
				if(a>=0 && a<n && b>=0 && b<m && arr[a][b]=='P')
					{ans++;break;}
			}
	cout<<ans;
}
