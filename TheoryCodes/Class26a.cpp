// Data Structure Theory on 5/20/2024.
// Created by mdti-tahsin on 5/25/24.
// DFS

#include <iostream>
#include <vector>

#define M (10<<7)
using namespace std;

vector<int> G[M + 1];
int stopwatch = 0;
int color[M + 1];
int entry[M + 1];
int finish[M + 1];

void DFS(int u) {
    color[u] = 1;
    stopwatch++;
    entry[u] = stopwatch;
    cout << "Visited node " << u << " at time " << entry[u] << endl;
    for (int i = 0; i < G[u].size(); i++) {
        int v = G[u][i];
        if (color[v] == 0) {
            DFS(v);
        }
    }
    stopwatch++;
    finish[u] = stopwatch;
    cout << "Finished visiting all descendants of node " << u << " at time " << finish[u] << endl;
}

int main() {
    for (int u = 0; u <= M; u++) {
        color[u] = 0;
    }

    int n;
    cout << "Enter the number of edges: ";
    cin >> n;

    cout << "Enter the edges:" << endl;
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
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

    DFS(src);

    return 0;
}

/*
    Dataset:

    10
    0 1
    0 2
    0 3
    1 3
    2 4
    3 5
    3 6
    4 7
    4 5
    5 2
*/