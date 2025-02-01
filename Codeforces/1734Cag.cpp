#include<bits/stdc++.h>
using namespace std;

void toar(long long r[], long long n, long long i){
    if(n==0){ }
    else{
        int t=n%10;
        n=n/10;
        toar(r,n,i-1);
        r[i]=t;
    }
}

int main(void){
    long long tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        long long r[n]={0},sum=0;
        vector<int> v;
        toar(r,k,n-1);
        //string r = to_string(k);
        for(int i=0;i<n;i++){
            if(r[i]==0) v.push_back(i+1);
        }
        int j=1;
        for(int i=1;i<=n;i++){
            if(find(v.begin(),v.end(),i)!=v.end()){
            bool l=0;
            int j=i-1;
            while(j<n){
                if(r[j]!=1){ l=1; sum+=i; r[j]=1;}
                else if(l==1 && r[j]==1){ break;}
                j+=i;
            }
            }
            //if(r[i]!=1)sum+=i+1;
        }
        //cout<<endl;
        cout<<sum<<endl;
    }
}
