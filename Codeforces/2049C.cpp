#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int,int>
#define fastio ios_base::sync_with_stdio; cin.tie(0);
using namespace std;

const int maxx=1e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    fastio;
    int tst=1;
    cin>>tst;
    while(tst--){
        int n,x,y;
        cin>>n>>x>>y;

        vector<int> v;

        if(n%3==1){
            int j=2;
            if((x-y)%3==0){
                if((x-1)%3==0) j+=2;
                else if((x-1)%3==1) j++;

                for(int i=0;i<n;i++){
                    v.pb((j%3));
                    j++;
                }
                swap(v[y-1], v[y%n]);
            }
            else{
                int j=0;
                for(int i=0;i<n;i++){
                    v.pb((j%3));
                    j++;
                }
            }

            /*if(n>3){
                if(v[n-4]==0){
                    v[n-4]=0;
                    v[n-3]=1;
                    v[n-2]=0;
                    v[n-1]=1;
                }
                else{
                    v[n-4]=1;
                    v[n-3]=0;
                    v[n-2]=1;
                    v[n-1]=0;
                }
            }*/

            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;

        }
        else{
            if((x-y)%3==0){
                int j=0;
                if((x-1)%3==0) j+=4;
                else if((x-1)%3==2) j+=2;

                for(int i=0;i<n;i++){
                    v.pb((j%3));
                    j++;
                }
                swap(v[y-1], v[y%n]);
                for(int i=0;i<n;i++){
                    cout<<v[i]<<" ";
                }
                cout<<endl;
            }
            else{
                int j=0;
                for(int i=0;i<n;i++){
                    v.pb((j%3));
                    j++;
                }
            }
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}
