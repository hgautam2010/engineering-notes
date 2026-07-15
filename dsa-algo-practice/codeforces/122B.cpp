#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int v4,v7;
	v4=v7=0;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]-'0'==4)
			v4++;
		if(str[i]-'0'==7)
			v7++;
	}
	if(v4==0 && v7==0)
		cout<<-1;
	else if(v4>=v7)
		cout<<4;
	else
		cout<<7;
}
