#include <bits/stdc++.h>
#define mp(a,b) make_pair(a,b)
using namespace std;
int main()
{
	string s;long long l,ll,i,j;
	char ch;
	cin>>s;
	vector<pair<char,int> > v;
	ch=s[0];l=0;
	for(i=0;i<=s.length();i++)
	{
		if(ch!=s[i])
		{
			v.push_back(mp(ch,l));
			ch=s[i];
			l=0;
		}
		l++;
	}
	for(i=0;i<v.size();i++)
		if(v[i].second > 2)
			v[i].second=2;
	for(i=1;i<v.size();i++)
		if(v[i].second == 2 && v[i-1].second == 2)
			v[i].second=1;
	for(i=0;i<v.size();i++)
	{
		for(j=0;j<v[i].second;j++)
			cout<<v[i].first;
	}
}
