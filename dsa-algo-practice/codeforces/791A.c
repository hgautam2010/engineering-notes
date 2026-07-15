//Done
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	i=0;
	while(a<b)
	{
		a*=3;
		b*=2;
		i++;
	}
	printf("%d",i);
	return 0;
}