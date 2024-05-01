#include<bits/stdc++.h>
using namespace std;
int cou=0;
char r[500][500];
bool visit[500][500]={{0}};

void searchh(int n,int m,int u,int v){
    if(visit[u][v]) return;
    else if(r[u][v]=='#') return;


    visit[u][v]=1;
    cou++;
    //cout<<u<<v<<" ";

    if(u+1<m) searchh(n,m, u+1,v);
    if(v+1<n) searchh(n,m, u,v+1);
    if(u-1>=0) searchh(n,m, u-1,v);
    if(v-1>=0) searchh(n,m, u,v-1);
}

int main(void){
    int tst,n,m,q,ortst;
    cin>>tst;
    ortst=tst;
    while(tst--){
        cin>>n>>m;
        int a,b;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>r[i][j];
                if(r[i][j]=='@') { a=i;b=j; }
                visit[i][j]=0;
            }
        }
        searchh(n,m,a,b);
        cout<<"Case "<<ortst-tst<<":"<<endl;
        cout<<cou<<endl;
        cou=0;
    }
}

//12, 02, 11, 22, 13
