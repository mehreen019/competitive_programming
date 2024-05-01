#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[2*n][2*n];
        int sw=1, cnt=0;
        for(int i=0;i<2*n;i+=2){
            int temp=2;
            while(temp--){
            for(int j=0;j<2*n;j++){
                if(sw && j%2==0){
                    if(cnt==0){
                     cout<<"#";
                        cnt++;
                    }
                    else{
                        cout<<".";
                        cnt=0;
                    }
                }
                else if(!sw && j%2==0){
                    if(cnt==0){
                     cout<<".";
                        cnt++;
                    }
                    else{
                    cout<<"#";
                    cnt=0;
                    }
                }


                if(sw && j%2){
                    if(cnt){
                        cout<<"#";
                        cnt++;
                    }
                    else{ cout<<"."; }
                }
                else if(!sw && j%2){
                    if(cnt){
                        cout<<".";
                        cnt++;
                    }
                    else cout<<"#";
                }

            }
            cnt=0;
            cout<<endl;
            }
            sw=(sw+1)%2;
            cnt=0;
        }
    }
}
