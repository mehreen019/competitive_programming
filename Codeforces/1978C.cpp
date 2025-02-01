#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst,n;
    cin>>tst;
    while(tst--){
        ll n, k, maxdist=0;
        cin>>n>>k;
        ll highh=n;
        for(int i=1;i<=n/2;i++){
            maxdist+= (highh-i)*2;
            highh--;
        }
        ll arr[n]={0};
        //cout<<maxdist<<endl;

        if(k>maxdist) cout<<"No"<<endl;
        else{
            ll temp=k;
            ll l=1, r=n;
            while(temp>0 && l<r){
                if(temp==0) break;
                if(temp>=(r-l)*2){
                    temp-=(r-l)*2;
                    arr[l-1]=r;
                    arr[r-1]=l;

                    //cout<<l<<" "<<r<<" "<<temp<<endl;
                    r--;
                    l++;

                    if(temp==0) break;
                }
                else{
                    r--;
                }
            }
            if(temp==0){
                cout<<"Yes"<<endl;
                for(int i=0;i<n;i++){
                    if(arr[i]==0) cout<<i+1<<" ";
                    else cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}
