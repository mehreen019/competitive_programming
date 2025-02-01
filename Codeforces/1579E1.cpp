#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,x;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],a[n],k=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(r[i]==1)x=i;
        }
        if(r[n-1]==1){swap(r[n-1], r[n-2]);
                        x--;
        }

        for(int i=x;i>=0;i--){
            a[k]=r[i];
            k++;
        }
        sort(a,a+x+1);
        for(int i=x+1;i<n;i++){
            a[k]=r[i];
            k++;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
