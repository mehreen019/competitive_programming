#include<stdio.h>

int t,n;
char m[402][402];
int x1,x2,y1,y2;

int main()
{
	int i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%s",m[i]);
			for(j=0;j<n;j++){
				if(m[i][j]=='*'){
					x2=x1;
					y2=y1;
					x1=i;
					y1=j;
				}
			}
		}
		if(x1==x2){
			x2=(x1+1)%n;
		}
		if(y1==y2){
			y2=(y1+1)%n;
		}
		m[x1][y1]='*';
		m[x1][y2]='*';
		m[x2][y1]='*';
		m[x2][y2]='*';
		for(i=0;i<n;i++){
			printf("%s\n",m[i]);
		}
	}
	return 0;
}

