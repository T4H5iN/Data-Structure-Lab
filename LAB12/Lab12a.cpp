#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> G[M+1];
    int ne;
    cin>>ne;
    for (int i=1;i<=ne;i++){
        int u,v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for(int u=0;u<=M;u++){
        int l=G[u].size();
        for(int i=0;i<=l-1;i++){
            cout<<G[u][i]<<" ";
        }
    }
}
