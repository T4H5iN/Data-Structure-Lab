// Adjacency List Undirected-Weighted Graph

vector<pair<int, int>> G[M + 1];
int ne;
cin >> ne;
for (int i = 1; i <= ne; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    G[u].push_back(make_pair(v, w));
    G[v].push_back(make_pair(u, w));
}
for (int u = 0; u <= M; u++) {
    for (int i = 0; i < G[u].size(); i++) {
        cout << G[u][i].first;
        cout << G[u][i].second;
    }
}

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
