#include<bits/stdc++.h>
using namespace std;
int main(void){
    int l=1,r=1000000;
    while(l!=r){
        int x=(l+r+1)/2;
        printf("%d\n", x);
        fflush(stdout);
        char h[3];
        scanf("%s", h);
        if(h[0]=='<') r=x-1;
        else l=x;
    }
    printf("! %d\n",l);
    fflush(stdout);
}
