#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,i,j,a,b,s;
	cin>>n>>m>>k;
	b=(n*m)/k;s=0;
	int arr[k];
	for(i=0;i<k-1;i++)
		{arr[i]=b;s+=b;}
	arr[i]=n*m-s;
	b=0;
	cout<<arr[0]<<" ";a=0;
	for(i=1;i<=n;i++)
	{
		for(j=((i%2==1)?1:m);;(i%2==1)?j++:j--,a++)
		{
			if(i%2==1 && j>m)
				break;
			else if(i%2==0 && j<=0)
				break;
			if(arr[b]==a)
			{
				b++;
				cout<<endl<<arr[b]<<" ";
				a=0;
			}
			cout<<i<<" "<<j<<" ";
		}
	}
}
