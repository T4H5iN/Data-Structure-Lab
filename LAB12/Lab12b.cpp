// Data Structure LAB on 5/13/2024.
// Created by mdti0 on 5/18/2024.
// Undirected-Weighted Graph

#include<iostream>
#include<vector>

#define M (10<<7)
using namespace std;

int main() {
    vector<pair<int, int>> G[M + 1];
    int ne;
    cout << "Enter number of edges: ";
    cin >> ne;
    cout << "Enter the edges:" << endl;
    for (int i = 1; i <= ne; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        G[u].push_back(make_pair(v, w));
        G[v].push_back(make_pair(u, w));
    }
    cout << "The adjacency list is: " << endl;
    for (int u = 0; u <= M; u++) {
        int l = G[u].size();
        for (int i = 0; i <= l - 1; i++) {
            cout << "(";
            cout << G[u][i].first << ",";
            cout << G[u][i].second << ") ";
        }
        cout << endl;
    }
}

