#include<bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pb push_back
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int maxx=1e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    fastio;

    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        string s="",temp;
        bool turn=0,ans;
        while(s.size()<n){
            if(!turn){
                cout<<"? "<<s<<'0'<<endl;
                cout.flush();

                cin>>ans;
                if(ans){
                    s+='0';
                }
                else{
                    cout<<"? "<<s<<'1'<<endl;
                    cout.flush();

                    cin>>ans;
                    if(ans){ s+='1'; }
                    else turn=1;
                }
            }
            else{
                cout<<"? "<<'0'<<s<<endl;
                cout.flush();

                cin>>ans;
                if(ans){ temp='0'; temp+=s; s=temp; }
                else{ temp='1'; temp+=s; s=temp; }
            }
        }

        cout<<"! "<<s<<endl;
        cout.flush();
    }
}
