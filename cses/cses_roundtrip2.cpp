#include<bits/stdc++.h>
using namespace std;
const int MAXX= 2e5+5;
vector<vector<int > > adj(MAXX);
int par[MAXX];
bool vis[MAXX];
vector<int> cycle;

bool dfs(int n){
    vis[n]=1;

    for(auto it: adj[n]){
        if(!vis[it]){ par[it]=n; if(dfs(it)){ cycle.push_back(it); return true;} }
        else{par[it]=n; cycle.push_back(it); return true;}
    }
    return false;
}

int main(void){
    int n,m,e1,e2;
    cin>>n>>m;
    for(int i=0;i<=n;i++){
        par[i]=i;
        vis[i]=0;
    }
    for(int i=0;i<m;i++){
        cin>>e1>>e2;
        adj[e1].push_back(e2);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(dfs(i)) break;
        }
    }
    if(cycle.empty()) cout<<"IMPOSSIBLE"<<endl;
    else{
        int t=cycle.back(), c_st;
        stack<int> st;
        t=par[t];
        st.push(t);
        c_st=t;
        t=par[t];
        //cout<<t<<endl;
        while(t!=c_st){
            st.push(t);
            t=par[t];
        }
        st.push(t);
        cout<<st.size()<<endl;
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
    }

}
