// Data Structure Theory on 5/20/2024.
// Created by mdti-tahsin on 5/25/24.
// DFS

#include <iostream>
#include <vector>
#define M (10<<7)
using namespace std;

int stopwatch = 0;

void DFS(int u) {
    color[u] = 1;
    stopwatch++;
    entry[u] = stopwatch;
    for (int i = 0; i < G[u].size(); i++) {
        int v = G[u][i];
        if (color[v] == 0) {
            DFS(v);
        }
    }
    stopwatch++;
    finish[u] = stopwatch;
}

int main() {
  vector<int> G[M + 1];
  int color[M + 1];
  int entry[M + 1];
  int finish[M + 1];
    for (int u = 0; u <= M; u++) {
        color[u] = 0;
    }
    int src;
    cin >> src;
    DFS(src);
    return 0;
}
