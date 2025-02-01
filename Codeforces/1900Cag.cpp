#include<bits/stdc++.h>
const int MAX=300005;
using namespace std;
vector<pair<int,int>> v (MAX+1,{0,0});
string s;

int dfs(int n, int cou){
    auto t=v[n];
    int l=t.first;
    int r=t.second;
    int lt=cou, rt=cou;
    //cout<<n<<"ok"<<cou<<endl;
    if(l==0 && r==0) return cou;

    if(l){
        if(s[n-1]=='L'){ lt= dfs(l, cou);}
        else lt= dfs(l, cou+1);
    }
    if(r){
        if(s[n-1]=='R') rt= dfs(r, cou);
        else rt= dfs(r, cou+1);
    }

    if(l==0) return rt;
    if(r==0) return lt;
    return min(lt,rt);
}

int main(void){
    int tst, n;
    cin>>tst;
    while(tst--){
        cin>>n>>s;
        for(int i=0;i<=n;i++){
            v[i]={0,0};
        }
        int a,b;
        for(int i=1;i<=n;i++){
            cin>>a>>b;
            v[i]={a,b};
        }
        //cout<<s<<endl;
        cout<<dfs(1,0)<<endl;
    }
}
