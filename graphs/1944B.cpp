#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        int a[n], b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        /*for(auto it: a){
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it: b){
            cout<<it<<" ";
        }
        cout<<endl;*/
        vector<int> diff, ans1,ans2;
        for(int i=1;i<n;i++){
            diff.push_back( abs(a[i]-a[i-1]) );
        }
        /*for(auto it: diff){
            cout<<it<<" ";
        }
        cout<<endl;*/
        for(int i=1;i<n;i++){
            auto it= find(diff.begin(), diff.end(), abs(b[i]-b[i-1]));
            int t= it - diff.begin();
            //cout<<t<<endl;
            if(it!=diff.end()){
                if( (b[i-1]^b[i])!=(a[t+1]^a[t]) ) continue;

                //cout<<i<<" "<<i-1<<" "<<b[i]<<endl;
                ans2.push_back(b[i-1]);
                ans2.push_back(b[i]);


                ans1.push_back(a[t]);
                ans1.push_back(a[t+1]);
                diff[t]=-1;
                if(t!= (diff.size()-1)){ diff[t+1]= -1;}
                if(t!=0){ diff[t-1]= -1;}
                i++;
                if(ans2.size()== (2*m)) break;
            }
        }
        for(auto it: ans1){
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it: ans2){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
//1 2 2 3 4 6
//1 3 4 5 5 6
