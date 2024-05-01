#include<stdio.h>
 int main(void){
    int n,tst,sum;
    scanf("%d", &tst);
    for(int i=0; i<tst; i++){
        scanf("%d", &n);
        sum=0;
        for(int j=1;j<=n;j++){
            if(j<10){sum++;}
            if(n<=100){if(j%11==0){sum++;}}
            if(n<=1000){if(j%111==0){sum++;}}
            if(n<=10000){if(j%1111==0){sum++;}}
            if(n<=100000){if(j%11111==0){sum++;}}
            if(n<=1000000){if(j%111111==0){sum++;}}
            if(n<=10000000){if(j%1111111==0){sum++;}}
            if(n<=100000000){if(j%11111111==0){sum++;}}
            if(n<=1000000000){if(j%111111111==0){sum++;}}
        }
        printf("%d\n", sum);
    }
 }

 /*int main()
{
	int a,b,c,i,u,j;
	scanf("%d",&j);
	for(;j>0;j--)
	{
		u=1;
		scanf("%d",&a);
	b=a;c=0;u=1;
	while(b>=10)
	{
		b=b/10;
		c++;
		u=u*10+1;
	}
	printf("%d\n",c*9+a/u);
	}

}
code from solution
*/
