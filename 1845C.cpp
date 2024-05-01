#include<bits/stdc++.h>
using namespace std;
string s;
int n,l,r,q,mul=1;
vector<int> occ(300001, 0);

int getDigits(int l){
    int t=l/mul;
    l=l*mul;
    return t;
}

string dp(int num, int idx){
    if(mul<=0) return "NO";


    int i=idx;
    if(occ[i]==0){
        for(;i<n ;i++){
            if(num==s[i]-48){
                occ[i]=1;
                break;
            }
        }
    }
    if(i>=n) return "YES";
    int t1=getDigits(l);
    int t2=getDigits(r);
    mul/=10;
    for(int j=t1;j<=t2;j++){
        dp(j,i+1);
    }
}


int main(void){
    int tst;
    string ans;
    cin>>tst;
    while(tst--){
        cin>>s>>q>>l>>r;
        n=s.size();
        int t1,t2;
        q--;
        while(q--){
            mul*=10;
        }
       // while(mul>0){
            t1=getDigits(l);
            t2=getDigits(r);
            mul/=10;
            for(int i=t1;i<=t2;i++){
                ans=dp(i,0);
            }
            //l=l%mul;
            //r=r%mul;

            cout<<ans<<endl;
            occ.clear();
       // }
    }
}
