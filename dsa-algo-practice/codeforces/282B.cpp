#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
	long long A,B,a,b,n,i;
	cin>>n;A=B=0;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		if(abs(A+a - B) <= 500)
			{cout<<"A";A+=a;}
		else
			{cout<<"G";B+=b;}
	}
}
