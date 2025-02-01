#include<bits/stdc++.h>
#define int long long
const int maxx=10000;
using namespace std;

int digits(int n){
    int cnt=0;
    while(n>0){
        n/=10;
        cnt++;
    }
    return cnt;
}

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,mul=1, target,dig,b,diff;
        string temp,s,last="";
        cin>>s;
        n=stoi(s);
        vector<string> alls;
        vector<pair<int, int>>ans;
        for(int i=0;i<9;i++){
            temp=last;
            int pos=0;
            while(pos<s.size()){
                temp+=(s[pos]);
                alls.push_back(temp);
                pos++;
                //cout<<temp<<" "<<pos<<" "<<mul<<endl;
            }
            last=temp;
        }

        for(int a=1;a<=maxx;a++){
            target=n*a;
            dig=digits(target);
            //cout<<target<<" "<<dig<<endl;
            for(int j=0;j<alls.size();j++){
                int cur = stoi(alls[j]);
                if(cur>target) break;

                b=target-cur;
                diff=(a*s.size())-b;
                if(diff!=j+1) continue;
                if(b>0 && b<=min(target, maxx)){
                    ans.push_back({a, b});
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }

    }
}

/*
for(int i=0;i<100;i++){
            temp=last;
            int pos=s.size()-1;
            while(pos>=0){
                temp+=(s[pos]-'0')*mul;
                alls.push_back(temp);
                mul*=10;
                pos--;
                cout<<temp<<" "<<pos<<" "<<mul<<endl;
            }
            last=temp;
}
*/
