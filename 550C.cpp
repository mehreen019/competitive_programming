#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin>>s;
    int n=s.size();
    if(n==1){
        if((s[0]-48)%8==0) cout<<"YES"<<endl<<s[0];
        else cout<<"NO";
    }
    else{
    for(int i=0;i<n;i++){
        int x=s[i]-48;
        for(int j=i+1;j<n;j++){
            int y=s[j]-48;
            if(x%8==0){ cout<<"YES"<<endl<<s[i]; return 0; }
            else if(y%8==0){ cout<<"YES"<<endl<<s[j]; return 0; }
            else if((x*10+y)%8==0){
                cout<<"YES"<<endl<<s[i]<<s[j]; return 0;
            }
            else{
                for(int k=j+1;k<n;k++){
                    int z=s[k]-48;
                    if((x*100+y*10+z)%8==0){
                        cout<<"YES"<<endl;
                        cout<<x<<y<<z;
                        return 0;
                    }
                }
            }

        }

    }
    cout<<"NO";
    }
}
