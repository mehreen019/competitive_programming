#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;
vector<int> pre(130,0);
vector<int> seq(130,0);

void sequence(){
    seq[0]=0;
    mp[0]++;
    for(int i=1;i<=128;i++){
        if(mp[seq[i-1]]==1){
            seq[i]=0;
            pre[seq[i-1]]=(i-1);
            mp[seq[i]]++;
        }
        else{
            seq[i]=i-1-pre[seq[i-1]];
            pre[seq[i-1]]=i-1;
            mp[seq[i]]++;
        }
    }
}

int main(void){
    int tst;
    cin>>tst;
    sequence();
    /*for(int i=0;i<=128;i++){
        cout<<seq[i]<<" ";
    }
    cout<<endl;*/
    while(tst--){
        int n;
        cin>>n;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(seq[i]==seq[n-1]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
