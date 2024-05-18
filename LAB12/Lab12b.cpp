#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <pair<int,int>> G[M+1];
    int ne;
    cin>>ne;
    for (int i=1;i<=ne;i++){
        int u,v,w;
        cin>>u>>v>>w;
        G[u].push_back(make_pair(v,w));
        G[v].push_back(make_pair(u,w));
    }
    for(int u=0;u<=M;u++){
        int l=G[u].size();
        for(int i=0;i<=l-1;i++){
            cout<<G[u][i].first;
            cout<<G[u][i].second;
        }
    }
}

