#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,tw=0,th=0;
    string s;
    vector<int> a;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]!='0' && s[i]!='1'){
            int n=s[i]-48,t;
            t=n;
            while(n%2==0 || n%3==0){
                while(n%2==0 || n%3==0){
                    if(n%3==0){ th++; n=n/3;}
                    else { tw++; n=n/2; }
                }
                t--;
                n=t;
            }
            if(n!=1) a.push_back(n);
            //cout<<n<<" ";
        }
    }
    while(th--){
        tw--;
        a.push_back(3);
    }
    while(tw--){
        a.push_back(2);
    }
    sort(a.begin(),a.end());
    for(int i=a.size()-1;i>=0;i--) cout<<a[i];
}
