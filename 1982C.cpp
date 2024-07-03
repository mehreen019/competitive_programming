#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MOD= 1e9+7;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,l,r;
        cin>>n>>l>>r;
        int arr[n+1], prefix[n+1], cnt=0, mark=0;
        prefix[0]=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            prefix[i]=prefix[i-1]+arr[i];
        }
        for(int i=1;i<=n;i++){
            if(prefix[i]-prefix[mark]<l){
                continue;
            }
            else if(prefix[i]-prefix[mark]>r){
                if(prefix[i]-prefix[i-1]>=l && prefix[i]-prefix[i-1]<=r){ cnt++; mark=i; }
                else if(prefix[i]-prefix[i-1]<l){
                    bool found=0;
                    while(mark!=i){
                        mark++;
                        if(prefix[i]-prefix[mark]>=l && prefix[i]-prefix[mark]<=r){
                            cnt++; found=1; break;
                        }
                    }
                    if(!found) mark=i-1;
                    else mark=i;
                }
                else if(prefix[i]-prefix[i-1]>r) mark=i;
                //mark=i;
            }
            else if(prefix[i]-prefix[mark]>=l && prefix[i]-prefix[mark]<=r){
                cnt++;
                mark=i;
            }
        }
        cout<<cnt<<endl;
    }
}
