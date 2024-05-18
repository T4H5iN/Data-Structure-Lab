// Data Structure Theory on 5/16/2024.
// Created by mdti0 on 5/18/2024.
// BFS

#include <iostream>
using namespace std;

int main() {
    vector<int> G[M + 1];
    int color[M + 1];
    for (int i = 0; i <= M; i++) {
        color[i] = 0;
    }

    int src;
    cin >> src;

    queue<int> Q;
    color[src] = 1;
    Q.push(src);

    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();
        int l = G[u].size();
        for (int i = 0; i <= l - 1; i++) {
            int v = G[u][i];
            if (color[v] == 0) {
                color[v] = 1;
                Q.push(v);
            }
        }Q.pop();
    }
}
