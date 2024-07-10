//BFS
int src;
cin >> src;
queue<int> Q;
color[src] = 1;
Q.push(src);

while (!Q.empty()) {
    int u = Q.front();
    for (int i = 0; i < G[u].size(); i++) {
        int v = G[u][i];
        if (color[v] == 0) {
            color[v] = 1;
            Q.push(v);
        }
    }Q.pop();
}

//DFS
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
