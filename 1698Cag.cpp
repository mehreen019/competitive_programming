#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        vector<int>v;
        map<int,int>m;
        int pc=0,nc=0,zc=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==0) zc++;
            else if(x>0) pc++;
            else nc++;
            if(x==0){
                if(zc<3){
                    v.push_back(x);
                    m[x]=1;
                }
            }
            else{
                v.push_back(x);
                m[x]=1;
            }
        }
        bool ans=1;
        if(pc>2 || nc>2) ans=0;
        if(ans){
            for(int i=0;i<v.size();i++){
                for(int j=i+1;j<v.size();j++){
                    for(int k=j+1;k<v.size();k++){
                        if(!m[v[i]+v[j]+v[k]]){
                            ans=0; break;
                        }

                    }
                    if(!ans) break;
                }
                if(!ans) break;
            }
        }

        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
