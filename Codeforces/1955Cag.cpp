#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        ll n,k;
        cin>>n>>k;
        ll r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        ll l=0,right=n-1,t=k,cou=0,fs=1,i=0;
        while(l<right){
            if(i%2==0){
                fs=0;
                if(t>=r[l]){
                    t-=r[l];
                    cou++;

                    if(t==0 || t<min(r[l],right)) break;
                    t-=min(r[l],right);
                    r[right]-=min(r[l],right);
                    l++;
                    if(r[right]<=0){
                        cou++;
                        right--;
                    }
                }
                else break;
                //cout<<r[l]<<" "<<r[right]<<" "<<t<<" "<<cou<<endl;
            }
            else{
                if(t>=r[right]){
                    t-=r[right];
                    cou++;
                    if(t==0 || t<min(r[l],right)) break;
                    t-=min(r[l],right);
                    r[l]-=min(r[l],right);
                    right--;
                    if(r[l]<=0){
                        cou++;
                        l++;
                    }
                }
                else break;
            }
        }
        if(l==right){
            if(r[l]<=t) cou++;
        }
        //cout<<l<<" "<<right<<endl;
        cout<<cou<<endl;
    }
}
