#include<stdio.h>
int main(void){
    int n, x1,x2,y1,y2,x3,y3;
    char c;
    scanf("%d", &n);
    while(n--){
        scanf("%c", &c);
        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
        if( x2-x1==0 && y2-y3==0 ) printf("NO\n");
        else if( x1-x3==0 && y1-y2==0 ) printf("NO\n");
        else if( x1-x2==0 && y1-y3==0 ) printf("NO\n");
        else if( x2-x3==0 && y2-y1==0) printf("NO\n");
        else if( x3-x1==0 && y3-y2==0) printf("NO\n");
        else if( x3-x2==0 && y3-y1==0 ) printf("NO\n");
        else printf("YES\n");
    }
}
