#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst, n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],a[n],b[n],cou=0,x=0,k=0,c=0;
        for(int i=0;i<n;i++){ cin>>r[i];
            a[i]=r[i];
         }
         sort(a,a+n);
        for(int i=0;i<n-1;i++){
            if(r[i+1]>r[i]){
                cou++;
                x=i; break;
             }
        }
        for(int i=0;i<n;i++){
                if(a[i]==r[i])c++;
            }
        if(c==n){printf("YES\n"); }
        else{
        if(cou==0){
            printf("NO\n");
        }
        else if(cou==1){
            for(int i=x+1;i<n;i++){
                b[k]=r[i];
                k++;
            }
            sort(b,b+k);
            k=0; c=0;
            for(int i=x+1;i<n;i++){
                if(b[k]==r[i]){c++;}
                k++;
            }
            if(n-x==c+1) cout<<"YES\n";
            else cout<<"NO\n";
        }

        }
    }
}
