``
//Create Linked List

struct node {
    int data;
    node *next;

    node() {
        next = NULL;
    }
};

    int n, flag = 0;
    cin >> n;
    node *head, *i, *prev_node;
    head = new node;
    int x;
    cin >> x;
    head->data = x;
    prev_node = head;
    for (int j = 2; j <= n; j++) {
        cin >> x;
        node *new_node;
        new_node = new node;
        new_node->data = x;
        prev_node->next = new_node;
        prev_node = new_node;
    }

    for (i = head; i != NULL; i = i->next) {
        cout << i->data;
    }

// Insert Linked List
    node *new_node;
    new_node = new node;
    new_node->data = x;
    if (position == 1) {
        new_node->next = head;
        head = new_node;
    }
    if (position > 1) {
        i = head;
        for (int k = 1; k < position - 1; k++) {
            i = i->next;
        }
        new_node->next = i->next;
        i->next = new_node;
    }

    /*
        Standalone condition to insert data at the end of the linked list.

        for (i = head; i->next != NULL; i = i->next) {}
        i->next = new_node;
    */

//Delete Linked List
    node *new_node;
    new_node = new node;
    new_node->data = x;
    if (position == 1) {
        temp = head;
        head = head->next;
        delete temp;
    }
    if (position > 1) {
        i = head;
        for (int k = 1; k <= position - 1; k++) {
            prev_node = i;
            i = i->next;
        }
        next_node = i->next;
        prev_node->next = next_node;
        delete i;
    }

    /*
        Standalone condition to delete data from the end of the linked list.

        for (i = head; i->next != NULL; i = i->next) {
            prev_node = i;
        }
        prev_node->next = NULL;
        delete i;
    */

//Stack STL

stack<int> Basket;
int n, x;
cin >> n;
for (int i = 1; i <= n; i++) {
    cin >> x;
    Basket.push(x);
}
cout << Basket.size();
cout << Basket.top();
while (!Basket.empty()) {
    int top_element = Basket.top();
    cout << top_element;
    Basket.pop();
}

//Circular Queue

int Queue[n];
int front = rear = -1;
void enqueue(int x) {
    //if (rear == n - 1)
    if ((rear + 1) % n == front) {
        cout << "Overflow Condition: Queue Full" << endl;
        return;
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        Queue[rear] = x;
    } else {
        //rear++
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
        //front++
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
``
