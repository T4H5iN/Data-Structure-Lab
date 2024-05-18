// Data Structure Theory on 5/9/2024.
// Created by mdti0 on 5/12/2024.
// Directed-Weighted Graph

#include <iostream>

#define inf (1<<31)-1
using namespace std;

int main() {
    int G[M + 1][M + 1];
    for (int u = 0; u <= M; u++) {
        for (int v = 0; v <= M; v++) {
            if (u == v) {
                G[u][v] = 0;
            } else {
                G[u][v] = inf;
            }
        }
    }
    int ne;
    cin >> ne;
    for (int i = 1; i <= ne; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        G[u][v] = w;
    }
    for (int i = 0; i <= M; i++) {
        for (int j = 0; j <= M; j++) {
                cout << G[i][j];
        }
    }
}
