#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],odd1=0,even1=0,odd2=0,even2=0;
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=0;i<n/2;i++){
            if(r[i]%2) odd1++;
            else even1++;
        }
        int i;
        if(n%2==0) i=n/2;
        else i=(n/2)+1;
        for( ;i<n;i++){
            if(r[i]%2) odd2++;
            else even2++;
        }
        if(odd1==odd2 && even1==even2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
