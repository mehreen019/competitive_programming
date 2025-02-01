#include<bits/stdc++.h>
using namespace std;
bool compare(string &s1, string &s2){
   return s1.size() < s2.size();
}

int main(void){
    int tst,n,h,x; string d;
    int r[100000]={0};
    vector  <pair<string, int>> v;
    cin>>tst;
    while(tst--){
        v.clear();
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>d;
            x=i+1;
            v.push_back(make_pair(d,x));
        }
        sort(v.begin(),v.end(),compare);
        for(int i=0;i<n;i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }

        /*for(int i=1;i<=n;i++){
            for(int j=1;j<i+1;j++){h=i+1;
            if(v[i].first+v[j].first==v[h].first){
                    x=v[h].second;
                    int r[x]={1}; }
            cout<<v[i].first<<endl;
            //cout<<v[j].first<<endl;
           // cout<<v[h].first<<endl;
            }

        }
        //cout<<v[0].first+v[1].first;
        for(int i=0;i<n;i++){
            cout<<r[i];
        }*/
    }
}
