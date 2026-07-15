#include <bits/stdc++.h>
#define MAXX 2000010
using namespace std;
int main(int argc, char const *argv[])
{
	int n,cn,r;
	bool exist[MAXX];
	memset(exist,0,sizeof(exist));
	cin>>n;
	int X[n],Y[n];
	for (int i = 0; i < n; ++i)
		{cin>>X[i];exist[X[i]] = true;}
	for (int i = 0; i < n; ++i)
		{cin>>Y[i];exist[Y[i]] = true;}
	cn = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			r = X[i]^Y[j];
			if(r >= 0 and r < MAXX and exist[r])
				cn++;
		}
	cout<<((cn&1)? "Koyomi" : "Karen");
	return 0;
}