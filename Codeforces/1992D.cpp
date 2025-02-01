#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxx=2e5+5;



int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        string ts,s="L";
        int n,m,k;
        cin>>n>>m>>k>>ts;
        s+=ts;
        bool ans=0;
        for(int i=0;i<n+1;i++){
            if(s[i]=='L'){
            int j=i+m, w=-1;
                bool lf=0;
                //cout<<i<<" "<<s[j]<<" L "<<w<<endl;
                while(j>i){
                    if(j>=n+1){ ans=1; break; }
                    if(s[j]=='L'){
                        i=j-1;
                        lf=1;
                        break;
                    }
                    else if(s[j]=='W'){
                        w=max(j-1,w);
                    }
                    j--;
                }


                if(ans) break;
                else if(!lf){
                    if(w==-1){ ans=0; break; }
                    else i=w;
                }
            }
            else if(s[i]=='W'){
                int tk=k;
                bool lost=1;
                for(int j=i+1;j<=i+tk;j++){

                    if(j==n+1){ ans=1; break; }
                    else if(s[j]=='C'){ lost=0; break;}
                    else if(s[j]=='L'){i=j-1;  break; }
                    k--;
                }
                //cout<<i<<" "<<" W "<<k<<endl;
                if(!lost || k<=0 || ans) break;
                else k--;
            }
            else if(s[i]=='C') break;
        }
        if(!ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
