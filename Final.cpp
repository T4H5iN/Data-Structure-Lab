//Circular Queue

void enqueue(int x, int Queue[]) {
    if ((rear + 1) % n == front) {
        cout << "Overflow Condition: Queue Full" << endl;
        return;
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        Queue[rear] = x;
    } else {
        rear = (rear + 1) % n;
        Queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        cout << "Underflow Condition: Queue Empty" << endl;
        return;
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % n;
    }
}

// Adjacency Matrix Directed-Weighted Graph

int G[M + 1][M + 1];
for (int u = 0; u <= M; u++) {
    for (int v = 0; v <= M; v++) {
        if (u == v) {
            G[u][v] = 0;
        } else {
            G[u][v] = -1;
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
    cout << endl;
}

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
