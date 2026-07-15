#include <stdio.h>

void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int check(int arr[],int a,int b,int count)
{
	int i;

	swap(&arr[a],&arr[b]);

	if (arr[a]<arr[b])
		count--;
	if (arr[a]>arr[b])
		count++;

	for(i=a+1;i<b;i++)
	{
		if(arr[i]>arr[b])
			count++;
		if(arr[i]<arr[a])
			count++;
		if(arr[i]>arr[a])
			count--;
		if(arr[i]<arr[b])
			count--;
	}

	return count;
}

int main()
{
	int n,T,a,b,count,i;

	scanf("%d%d",&n,&T);
	int arr[n];
	count=0;

	for(i=0;i<n;i++)
		arr[i]=i+1;

	while(T--)
	{
		scanf("%d%d",&a,&b);

		if(a<b)
			count=check(arr,a-1,b-1,count);
		else
			count=check(arr,b-1,a-1,count);

		printf("%d\n", count);
	}
	return 0;
}