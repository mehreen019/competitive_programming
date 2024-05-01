#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        vector<pair<char, char>> v;
        char x,mat[10][10];
        int ans=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>mat[i][j];
                if(mat[i][j]=='X') v.push_back(make_pair(i,j));
            }
        }
       /* for(int i=0;i<v.size();i++){
            if(v[i].first==0 || v[i].second==0 || v[i].first==9 || v[i].second==9){ ans+=1 ;}
            else if(if(v[i].first==0 || v[i].second==0 || v[i].first==9 || v[i].second==9){ ans+=1 ;})
        }*/
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(mat[i][j]=='X'){
                    if((i>=4&&i<=5) && (j>=4 && j<=5)) ans+=5;
                    else if((i>=3 && i<=6) && (j>=3 && j<=6))ans+=4;
                    else if((i>=2&&i<=7) && (j>=2 && j<=7))ans+=3;
                    else if((i>=1&&i<=8) && (j>=1 && j<=8))ans+=2;
                    else ans+=1;

                    //cout<<i<<j<<ans<<endl;
                }
            }
        }
        cout<<ans<<endl;
    }
}
