#include<bits/stdc++.h>
using namespace std;
int main(void){
    int l; string s; char x,y;
    int a[5000];
    int ml,cou=0,cou1=0;
    vector <pair<int ,int>> v;
    cin>>l>>s;
    for(int i=0;i<l;i++){
        if(s[i]=='G')cou++;
        if(s[i]=='S')cou1++;
    }
    if(cou==l){
        cout<<l<<endl;
        return 0;
    }
    if(cou1==l){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<l;i++){
        if(s[i]=='G'){
                x=i;
            while(s[i]!='S'){
                y=i; i++;
                if(i==l)break;
            }
        if(s[i-2]=='G' || i==l)
         v.push_back(make_pair(x,y));
        }
        }
   /*for(int i=0;i<v.size();i++){
        cout<<v[i].first<<","<<v[i].second<<endl;
    }*/
    for(int i=0;i<v.size();i++){
        ml=v[i].second-v[i].first+1;
        a[i]=ml;
    }
    ml=0;
    for(int i=0;i<v.size()-1;i++){
        if(a[i]+a[i+1]>ml) ml=a[i]+a[i+1];
    }
    if(ml==cou) cout<<ml<<endl;
    else cout<<ml+1<<endl;
}
