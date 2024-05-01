#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        int cou=INT_MAX,t,tt,odd=0,even=0;
        for(int i=0;i<n;i++){
                t=r[i]/k;
                if(t*k!=r[i]){ tt=(t+1)*k;
                cou=min(cou, tt-r[i]);}
                else {cou=0; break;}
                if(r[i]%2) odd++;
                else even++;
        }
        if(k==4 && even==0){
            cou=min(cou,2);
        }
        else if(k==4 && even==1){
            cou=min(cou,1);
        }
        else if(k==4 && even>=2){
            cou=0;
        }
        cout<<cou<<endl;
    }
}
