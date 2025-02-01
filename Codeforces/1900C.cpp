#include<bits/stdc++.h>
const int MAX=300005;
using namespace std;
vector<struct node*> tree(MAX+1, NULL);
struct node{
    struct node* left;
    struct node* right;
    struct node* parent;
    int data;
    int left_sub;
    int right_sub;
};

struct node* create_node(int key){
    struct node* temp = new node();
    temp->parent = NULL;
    temp->left= NULL;
    temp->right=NULL;
    temp->data = key;
    temp->left_sub=0;
    temp->right_sub=0;
    return temp;
};

struct node* root = NULL;
int tot_node = 0;

node* search_key(struct node* check, int data){
    //cout<<"ok";
    while(check!=NULL && check->data!=data){
        if(data<check->data) check=check->left;
        else check=check->right;
    }
    //cout<<check->data;
    return check;
}

/*void insert_key(struct node* check, int data){
    //cout<<"ok";
    struct node* temp= new node();
    temp->data=data;

    if(check==NULL){ root=temp; root->parent=NULL; return;}
    else if(check->left==NULL && check->data>data){ check->left=temp; check->left_sub+=1; temp->parent=check; return; }
    else if(check->right==NULL && check->data<data){ check->right=temp; check->right_sub+=1; temp->parent=check; return; }

    if(data< check->data){ check->left_sub+=1; insert_key(check->left, data);}
    else{ check->right_sub+=1; insert_key(check->right, data);}
}

node* find_parent(struct node* check){
    int data=check->data;
    while(check!=NULL && data>=check->data){
        check=check->parent;
        //if(check!=NULL) cout<<check->data;
    }
    //cout<<"ok";
    return check;
}*/

void fix_tree(int i){
    //cout<<"ok";
    if(tree[i]->left!=NULL){ fix_tree(tree[i]->left->data);
        tree[i]->left_sub=tree[i]->left->left_sub + tree[i]->left->right_sub + 1;
    }
    if(tree[i]->right!=NULL){ fix_tree(tree[i]->right->data); tree[i]->right_sub+=1;
        tree[i]->right_sub=tree[i]->right->left_sub + tree[i]->right->right_sub + 1;
    }
}


int main(void){
    int tst, n;
    cin>>tst;
    while(tst--){
        cin>>n;
        string s;
        cin>>s;
        vector<pair<int,int>> v (n+1,{0,0});

        int a,b;
        for(int i=1;i<=n;i++){

            cin>>a>>b;
            v[i]={a,b};
        }
        tree.resize(n+1);
        tree[1]= create_node(1);

        queue<int> q;
        q.push(1);

        while(!q.empty()){
            int i=q.front();
            q.pop();
            //cout<<tree[i]->data;
            if(v[i].first!=0){
                struct node* temp= create_node(v[i].first);
                temp->parent=tree[i];
                tree[i]->left= temp;
                tree[v[i].first]= temp;
                q.push(v[i].first);
            }
            if(v[i].second!=0){
                struct node* temp= create_node(v[i].second);
                tree[i]->right= temp;
                temp->parent=tree[i];
                tree[v[i].second]= temp;
                q.push(v[i].second);
            }
        }
        int idx=1,cou=0;
        fix_tree(1);
        while(1){
            if(tree[idx]->left==NULL && tree[idx]->right==NULL) break;

            if(s[idx]=='L'){
                if(tree[idx]->left==NULL){

                        s[idx]='R'; cou++; idx=tree[idx]->right->data;
                        //cout<<idx<<"ok";
                }
                else{
                    idx=tree[idx]->left->data;
                }
            }
            else if(s[idx]=='R'){
                if(tree[idx]->right==NULL){
                        s[idx]='L'; cou++; idx=tree[idx]->left->data;
                }
                else{
                    idx=tree[idx]->right->data;
                }
            }
            else if(s[idx]=='U'){
                if(tree[idx]->parent==NULL){
                    if(tree[idx]->left_sub < tree[idx]->right_sub){
                        idx=tree[idx]->left->data;
                        s[idx]='L';
                    }
                    else{
                        idx=tree[idx]->right->data;
                        s[idx]='R';
                    }
                    cou++;
                }
                else idx=tree[idx]->parent->data;
            }
        }

        cout<<cou<<endl;

        /*for(int i=1;i<=n;i++){
            cout<<tree[i]->data<<" "<<tree[i]->left_sub<<" "<<tree[i]->right_sub<<" ";
            if(tree[i]->left!=NULL){
                cout<<tree[i]->left->data<<" ";
            }
            else cout<<0<<" ";
            if(tree[i]->right!=NULL){
                cout<<tree[i]->right->data<<" ";
            }
            else cout<<0<<" ";
            if(tree[i]->parent!=NULL){
                cout<<tree[i]->parent->data<<endl;
            }
            else cout<<0<<endl;
        }*/
    }
}
