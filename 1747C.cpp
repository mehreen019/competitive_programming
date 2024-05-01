#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    scanf("%d", &tst);
    while(tst--){
        scanf("%d", &n);
        int r[n],a[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
            a[i]=r[i];
        }
        sort(a,a+n);
        if(a[0]==r[0])printf("Bob\n");
        else printf("Alice\n");
    }
}
