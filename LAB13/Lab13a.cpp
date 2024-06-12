// Data Structure LAB on 5/20/2024.
// Created by mdti-tahsin on 5/23/24.
// BFS

#include <iostream>
#include <vector>
#include <queue>

#define M (20000)
using namespace std;

int main() {
    vector<int> G[M + 1];
    int color[M + 1];
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int n;
        cin >> n;

        for (int i = 0; i <= M; i++) {
            G[i].clear();
        }

        for (int i = 0; i < n; i++) {
            int u, v;
            cin >> u >> v;
            G[u].push_back(v);
            G[v].push_back(u);
        }

        for (int i = 0; i <= M; i++) {
            color[i] = -1;
        }

        int maxMembers = 0;

        for (int i = 1; i <= M; i++) {
            if (color[i] == -1 && !G[i].empty()) {
                int count1 = 0, count2 = 0;
                int flag = 1;
                queue<int> Q;
                Q.push(i);
                color[i] = 1;
                count1++;

                while (!Q.empty() && flag == 1) {
                    int u = Q.front();
                    Q.pop();

                    for (int j = 0; j < G[u].size(); j++) {
                        int v = G[u][j];
                        if (color[v] == -1) {
                            color[v] = 1 - color[u];
                            if (color[v] == 1) {
                                count1++;
                            } else {
                                count2++;
                            }
                            Q.push(v);
                        } else if (color[v] == color[u]) {
                            flag = 0;
                            break;
                        }
                    }
                }

                if (flag == 1) {
                    maxMembers += max(count1, count2);
                }
            }
        }

        cout << "Case " << t << ": " << maxMembers << endl;
    }

    return 0;
}
