// Data Structure LAB on 5/13/2024.
// Created by mdti0 on 5/18/2024.
// Undirected-Unweighted Graph

#include<iostream>
#include<vector>

#define M (10<<7)
using namespace std;

int main() {
    vector<int> G[M + 1];
    int ne;
    cout << "Enter number of edges: ";
    cin >> ne;
    cout << "Enter the edges:" << endl;
    for (int i = 1; i <= ne; i++) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    cout << "The adjacency list is: " << endl;
    for (int u = 0; u <= M; u++) {
        for (int i = 0; i < G[u].size(); i++) {
            cout << G[u][i] << " ";
        }
        cout << endl;
    }
}

