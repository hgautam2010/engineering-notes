//Done
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j,k,m,count,num;
	scanf("%d%d",&n,&k);
	int arr[20];

	if(n==0)
	{
		printf("0\n");
	}
	else
	{
		i=0;
		while(n>0)
		{
			arr[i]=n%10;
			n/=10;
			i++;
		}

		for (j = 0,count = 0; j < i; ++j)
			if(arr[j]==0)
				count++;

		if(count<k)
			printf("%d\n", i-1);
		else
		{
			num=count=0;
			for (j = 0; j<i && count!=k; ++j)
			{
				if(arr[j]==0)
					count++;
				else
					num++;
			}
			printf("%d\n", num);
		}
	}
	return 0;
}