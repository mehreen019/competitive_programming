#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
const int maxx=2e5+5;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        int r[n];
        vector<int> time(maxx, 0);
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        sort(r, r+n);
        bool ans=1, arrend=0;
        int j=0, cnt=0, anst=0;
        for(int i=1;i<maxx;i++){
            if(time[i]<0){
                if(time[i])
                time[i+k]+=abs(time[i]);
            }
            if(time[i]>0){
                time[i+k]-=abs(time[i]);
            }

            if(i==r[j] && !arrend){
                if(time[i]<0){ ans=0; break; }

                time[i]++;
                time[i+k]--;
                j++;
                if(j==n) arrend=1;
            }
            cnt+=time[i];
            if(cnt==n){ anst=i; break;}
        }
        if(ans && cnt==n){ cout<<anst<<endl; }
        else cout<<-1<<endl;
    }
}
