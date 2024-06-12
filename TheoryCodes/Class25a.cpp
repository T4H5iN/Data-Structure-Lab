// Data Structure Theory on 5/16/2024.
// Created by mdti0 on 5/18/2024.
// BFS

#include <iostream>
#include <queue>
#include <vector>

#define M (10 << 7)

using namespace std;

int main() {
    vector<int> G[M + 1];
    int color[M + 1];
    int level[M + 1];
    for (int i = 0; i <= M; i++) {
        color[i] = 0;
        level[i] = -1;
    }

    int ne;
    cout << "Enter the number of edges: ";
    cin >> ne;

    cout << "Enter the edges:" << endl;
    for (int i = 0; i < ne; i++) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    cout << "Adjacency list of the graph:" << endl;
    for (int i = 0; i <= M; i++) {
        if (!G[i].empty()) {
            cout << "Node " << i << ": ";
            for (int j = 0; j < G[i].size(); j++) {
                cout << G[i][j] << " ";
            }
            cout << endl;
        }
    }

    int src;
    cout << "Enter the source node: ";
    cin >> src;

    queue<int> Q;
    color[src] = 1;
    level[src] = 0;
    Q.push(src);

    while (!Q.empty()) {
        int u = Q.front();
        cout << "In " << u << endl;
        Q.pop();
        for (int i = 0; i < G[u].size(); i++) {
            int v = G[u][i];
            if (color[v] == 0) {
                color[v] = 1;
                level[v] = level[u] + 1;
                Q.push(v);
            }
        }
    }
    cout << "Level of each node from source node " << src << ":" << endl;
    for (int i = 0; i <= M; i++) {
        if (level[i] != -1) {
            cout << "Node " << i << ": Level " << level[i] << endl;
        }
    }
}

/*
    9
    20 30
    30 10
    10 20
    20 40
    20 50
    30 60
    50 30
    50 70
    70 60
*/