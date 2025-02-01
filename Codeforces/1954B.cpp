#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        vector<int>r(n);
        int cou=0;
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>r[i];
            s.insert(r[i]);
        }
        if(s.size()==1){ cout<<-1<<endl; }
        else{
            for(int i=0;i<r.size()-2;i++){
                for(int j=i+2;j<r.size();j++){cout<<i<<" ";
                    if(r[i]==r[j] && r[i+1]!=r[i]){
                        cou++;
                        //cout<<i<<" "<<j<<" "<<cou<<endl;
                        auto it=r.begin()+j;
                        r.erase(it);
                        j--;
                    }
                    else{ break;}
                }

            }
            for(int i=0;i<r.size();i++){
                cout<<r[i]<<" ";
            }
            cout<<endl;
            cout<<cou<<endl;
        }
    }
}
//
