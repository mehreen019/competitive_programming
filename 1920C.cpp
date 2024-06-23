#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxx=2e5+5;
vector<int> divisors[maxx];

void sieve(){
    for(int i=2;i<maxx;i++){
        divisors[i].push_back(1);
        for(int j=i;j<maxx;j+=i){
            divisors[j].push_back(i);
        }
    }
}

int32_t main(void){
    int tst;
    cin>>tst;
    sieve();
    while(tst--){
        int n, totgcd=0, cnt=0;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        for(auto d: divisors[n]){
            for(int i=0;i<n-d;i++){
                totgcd= __gcd(totgcd, abs(r[i]-r[i+d]));
                //cout<<totgcd<<" ";
            }
            //cout<<endl<<d<<" "<<totgcd<<endl;
            if(totgcd!=1){  cnt++; }
            totgcd=0;
        }
        if(n==1) cout<<1<<endl;
        else cout<<cnt<<endl;
    }
}
