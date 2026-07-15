#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,lsf,ml;
	scanf("%d ",&n);
	char ch;
	lsf=ml=0;
	for(int i=0;i<n;i++)
	{
		scanf("%c",&ch);
		if(ch==' ')
		{
			if(ml<lsf)
				ml=lsf;
			lsf=0;
		}
		else if(ch>='A' && ch<='Z')
		{
			lsf++;
		}
	}
	if(ml<lsf)
		ml=lsf;
	cout<<ml;
}
