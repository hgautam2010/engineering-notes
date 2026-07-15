#include <bits/stdc++.h>
using namespace std;
int dp[1000005];
int b[1000005];
void print(char str[],int n)
{
	for(int i=0;i<n;i++)
		cout<<str[i];
}
int main()
{
	char str[1000005];
	cin>>str;
	int num,a,b,i,size=strlen(str);
	cin>>a>>b;
	if(a==0 || b==0)
	{cout<<"NO";return 0;}
	dp[0]=(str[0]-'0')%a;
	i=0;num=0;
	while(i<size)
	{
		num=num*10 + str[i]-'0';
		num=num%a;
		dp[i]=num;
		i++;
	}
	num=1;
	for(i=size-1;i>=0;i--)
	{
		::b[i]=num;
		num=(num*10)%b;
	}
	num=0;
	for(i=size-1;i>0;i--)
	{
		if(str[i]!='0')
			num=( (str[i]-'0') * ::b[i] + num ) % b;
		if(str[i]!='0' && dp[i-1]==0 && num==0)
			{cout<<"YES"<<endl;print(str,i);cout<<endl;print(str+i,size-i);return 0;}
	}
	cout<<"NO";
	return 0;
}
