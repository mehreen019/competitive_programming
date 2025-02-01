#include<bits/stdc++.h>
using namespace std;
const int MAX=100005;
int parent[MAX];
int ind[MAX];
bool bl[MAX];
int connected=0;

void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
    connected--;
}

int main(void){
    int n,m,a,b,q,ans=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        make_set(i);
    }
    connected=n;
    vector<pair<int,int>>v;
    stack<int> st;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v.push_back({a,b});
        bl[i]=true;
        ind[i]=0;
    }
    cin>>q;

    for(int i=0;i<q;i++){
        cin>>ind[i];
        ind[i]--;
        bl[ind[i]]=false;
    }
    for(int i=0;i<m;i++){
        if(bl[i]){
            int a=v[i].first, b=v[i].second;
            if(find_set(a)!=find_set(b)){
                union_sets(a,b);
            }
        }
    }
    for(int i=q-1;i>=0;i--){
        st.push(connected);
        int a=v[ind[i]].first, b=v[ind[i]].second;
        if(find_set(a)!=find_set(b)){
            union_sets(a,b);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
