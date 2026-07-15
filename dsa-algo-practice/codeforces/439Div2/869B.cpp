#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int  ull;
int main(int argc, char const *argv[])
{
	ull a,b,r;
	r = 1;
	cin>>a>>b;
	if(b - a <= 10)
		for(ull i = b;i > a; i--)
			r = (r*(i%10))%10;
	else
		r = 0;
	cout<<r;
	return 0;
}