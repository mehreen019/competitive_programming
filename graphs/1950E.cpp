#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n; string s;
        cin>>s;
        bool ans=0, change=0;
        int ti,tk,sub, len;
        if(n%2==0){
        for(int k=0;k<2;k++){
            int sub=0, len=-1;
            for(int i=k+1;i<n;i++){
                if(s[0]==s[i]){
                    ti=i+1,tk=1; len=1;
                    while(s[ti]==s[tk] || !change){
                        len++;
                        if(s[ti]==s[tk]) change=1;
                        ti++; tk++;
                    }
                }
                /*if(len!=-1){
                    int templen=0; sub=2;
                    while(ti<n){
                        for(int j=0;j<len;j++){
                            if(s[k+j]==s[ti+j]) templen++;
                            else if(!change){ templen++; change=1; }
                            else break;
                        }
                        if(templen==len){ sub++; ti+=len;}
                        else break;
                    }
                }
                if(sub*len == n){ ans=1; break;}
                else{ len=0; sub=0; change=0; }*/
            }
            if(ans) break;
        }
        }
        if(ans) cout<<len<<endl;
        else cout<<n<<endl;
    }
}

//hanhbnhan
