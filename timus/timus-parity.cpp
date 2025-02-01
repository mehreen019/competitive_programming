#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX=100005;
pair<int,string> parent[MAX];
int ans=-1;

///set each nodes parent to itself
void make_set(int v) {
    parent[v] = {v,""};
}

///find parent of a value by following it's chain upwards
pair find_set(int v) {
    if (v == parent[v].first)
        return parent[v];

    return parent[v] = find_set(parent[v].first);
    //return parent[v];
}

///find parents, and if they don't match, set one's parent to another's
void union_sets(pair a, pair b) {
    a.first = find_set(a);
    b.first = find_set(b);
    if (a != b)
        {
            parent[b.first] = a;
        }
    else{
        parent[a.first]=a;
    }
}

int main(void){
    int n,q,a,b,inq;
    pair rep;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        make_set(i);
    }
    inq=q;
    string par;
    while(q--){
        cin>>a>>b>>par;
        if(inq==q-1){
            rep={a,par};
        }
        int pa=find_set(a);
        if(pa==a){

            for(int i=a;i<=b;i++){
                union_sets(rep,{i,""});
            }
        }
        else{

        }
    }
}
