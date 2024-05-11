// Data Structure Theory on 5/6/2024.
// Created by mdti0 on 5/12/2024.
// Undirected-Unweighted Graph

#include <iostream>

#define M (10<<4)
using namespace std;

int main() {
    int G[M + 1][M + 1];
    for (int i = 0; i <= M; i++) {
        for (int j = 0; j <= M; j++) {
            G[i][j] = 0;
        }
    }
    int ne;
    cout << "Enter the number of edges: ";
    cin >> ne;
    cout << "Enter the edges:" << endl;
    for (int i = 1; i <= ne; i++) {
        int u, v;
        cin >> u >> v;
        G[u][v] = 1;
        G[v][u] = 1;
    }
    cout << "The adjacency matrix is: " << endl;
    for (int i = 0; i <= M; i++) {
        for (int j = 0; j <= M; j++) {
            cout << "[" << G[i][j] << "] ";
        }
        cout << endl;
    }
}