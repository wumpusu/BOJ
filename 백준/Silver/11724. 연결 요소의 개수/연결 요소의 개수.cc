#include <bits/stdc++.h>
using namespace std;

vector<int> vec[1001];
int visited[1001] = {0};

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while (!q.empty()) {  
        int current = q.front();  
        q.pop();
        for (int i = 0; i < vec[current].size(); i++) {
            int next = vec[current][i];
            if (visited[next] == 0) {
                visited[next] = 1;
                q.push(next);
            }
        }
    }
}

int main() {
    int n, m, u, v;
    int cnt = 0;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        vec[u].push_back(v);  
        vec[v].push_back(u);  
    }

    for (int i = 1; i <= n; i++) {
        if (visited[i] == 0) {
            bfs(i);
            cnt++;
        }
    }

    cout << cnt;
}
