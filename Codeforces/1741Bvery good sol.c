#include<stdio.h>
int t,n;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n==2) puts("2 1");
		else if(n==3) puts("-1");
		else
		{
			for(int i=n;i>=n-1;--i) printf("%d ",i);
			for(int i=1;i<n-1;++i) printf("%d ",i);
			printf("\n");
		}
	}
	return 0;
}
