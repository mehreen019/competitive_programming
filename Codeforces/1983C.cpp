#include<bits/stdc++.h>
#define int long long
using namespace std;
int gb=0, prefix[3][200005];

int solve(int p1, int p2, int mark, int tot){
    bool f=0;
    //cout<<"first mark: "<<mark<<endl;
    mark=lower_bound(prefix[p1], prefix[p1] +gb+1, prefix[p1][mark]+tot) - prefix[p1];
    if(mark>gb) return -1;
    //cout<<"second mark: "<<mark<<endl;
    int k=lower_bound(prefix[p2], prefix[p2]+gb+1, prefix[p2][mark]+tot) - prefix[p2];
    if(k>gb) return -1;
    else return mark;
}

int32_t main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        gb=n;
        int val[3][n], mark=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                cin>>val[i][j];
            }
        }
        for(int i=0;i<3;i++){
            prefix[i][0]=0;
            for(int j=1;j<=n;j++){
                prefix[i][j]=prefix[i][j-1]+val[i][j-1];
            }
        }
        int tot=ceil(float(prefix[0][n])/3.00), div=0;
        //cout<<tot<<endl;
        bool ans=0;
        for(int i=0;i<3;i++){
            for(int j=1;j<=n;j++){
                if(prefix[i][j]>=tot){
                    div=solve( (i+1)%3, (i+2)%3, j, tot);
                    if(div!=-1){
                        ans=1;
                        if(i==0){
                            cout<<1<<" "<<j<<" "<<j+1<<" "<<div<<" "<<div+1<<" "<<n<<endl;
                        }
                        else if(i==1){
                            cout<<div+1<<" "<<n<<" "<<1<<" "<<j<<" "<<j+1<<" "<<div<<endl;
                        }
                        else if(i==2){
                            cout<<j+1<<" "<<div<<" "<<div+1<<" "<<n<<" "<<1<<" "<<j<<endl;
                        }
                        break;
                    }
                    else{
                        div=solve((i+2)%3, (i+1)%3, j, tot);
                    if(div!=-1){
                        ans=1;
                        if(i==0){
                            cout<<1<<" "<<j<<" "<<div+1<<" "<<n<<" "<<j+1<<" "<<div<<endl;
                        }
                        else if(i==1){
                            cout<<j+1<<" "<<div<<" "<<1<<" "<<j<<" "<<div+1<<" "<<n<<endl;
                        }
                        else if(i==2){
                            cout<<div+1<<" "<<n<<" "<<j+1<<" "<<div<<" "<<1<<" "<<j<<endl;
                        }
                        break;
                    }
                    }
                }
            }
            if(ans) break;
        }
        if(!ans) cout<<-1<<endl;

    }
}
