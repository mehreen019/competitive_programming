#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m,k;
        cin>>n>>m>>k;
        int r[n+5],b[m+5], cou=0,ans[n+5], pla=0;
        map<int, int> mpr, mpb;
        for(int i=1;i<=n;i++){
            cin>>r[i];
            //mpr[r[i]]++;
        }
        for(int i=1;i<=m;i++){
            cin>>b[i];
            mpb[b[i]]++;
        }
        ans[0]=0;
        for(int i=1;i<=n;i++){
            if(i<=m){
                if(mpb[r[i]]>0){
                    mpr[r[i]]++;
                    if(mpr[r[i]]<=mpb[r[i]]) cou++;
                }
                ans[i]=cou;
            }
            else{
                //cout<<mpb[r[i-k]]<<" ";
                if(mpb[r[i-m]]>0){
                    mpr[r[i-m]]--;
                    if(mpr[r[i-m]]<mpb[r[i-m]]){
                        cou--;
                    }
                }

                //cout<<r[i-m]<<" "<<mpb[r[i-k]]<<endl;
                if(mpb[r[i]]>0){
                    mpr[r[i]]++;
                    if(mpr[r[i]]<=mpb[r[i]]) cou++;
                }
                ans[i]=cou;
            }
        }
        /*for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }*/
        //cout<<endl;
        for(int i=m;i<=n;i++){
            if(ans[i]>=k) pla++;
        }
        cout<<pla<<endl;
    }

}
//4 4 3 4 4 4
//3 4
