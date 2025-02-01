#include<stdio.h>
int main(void){
    int tst,n,l;
    char c,ar[20002],w;
    scanf("%d", &tst);
    while(tst--){int x=0,y=0,x1=0,y1=0;
        scanf("%d %c ", &n,&c);
        scanf("%s", ar);
        for(int i=0;i<n;i++){
            if(ar[i]=='g'){
                x=i+1; break;
            }
        }
        for(int i=0;i<n;i++){
            if(ar[i]==c){
                x1=i+1; break;
            }
        }
        for(int i=n;i>0;i--){
            if(ar[i]==c){
                    y1=i+1;}
            if(ar[i]=='g'){
                y=i+1; break;
            }
            }
        if(c=='g')printf("0\n");
        else if(y1>y)printf("%d\n", (n-y1)+x);
        else if(y>y1)printf("%d\n", x-x1);

    }
}
