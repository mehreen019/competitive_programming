#include<bits/stdc++.h>
#define int long long
#define pb push_back

using namespace std;
int32_t main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tst;
    cin>>tst;
    while(tst--){
        int a,b,k;
        cin>>a>>b>>k;

        int x=a*k, y=b*k;
        vector<pair<int, int> > v(k+5);
        //cout<<"ok";
        if(k%2){
            for(int i=1;i<=k-1;i+=2){
                v[i].first=(i);
                v[i+1].first=(i*(-1));

                v[i].second=(i);
                v[i+1].second=(i*(-1));

                //cout<<i<<endl;
            }
            v[k].first=x;
            v[k].second=y;
        }
        else if(k%2==0){
            for(int i=1;i<=k-2;i+=2){
                v[i].first=(i);
                v[i+1].first=(i*(-1));

                v[i].second=(i);
                v[i+1].second=(i*(-1));
            }

            if(x==0){
                v[k-1].first=(k);
                v[k].first=(k*(-1));
            }
            else{
            v[k-1].first=((x/2)-1);
            v[k].first=((x/2)+1);}

            if(y==0){
                v[k-1].second=(k);
                v[k].second=(k*(-1));
            }
            else{
            v[k-1].second=((y/2)-1);
            v[k].second=((y/2)+1);
            }
        }

        for(int i=1;i<=k;i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }

    }
}
