#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int,int>>> graph(n + 1);

    for(int i = 0; i < m; i++) {
        int a, b, v;
        cin >> a >> b >> v;
        graph[a].push_back({b, v});
    }

    int start, end;
    cin >> start >> end;

    vector<int> dist(n + 1, INF);

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    dist[start] = 0;
    pq.push({0, start});

    while(!pq.empty()) {
        auto [cost, now] = pq.top();
        pq.pop();

        if(cost > dist[now]) {
          continue;
        }

        for(auto next : graph[now]) {
            int next_node = next.first;
            int next_cost = cost + next.second;

            if(next_cost < dist[next_node]) {
                dist[next_node] = next_cost;
                pq.push({next_cost, next_node});
            }
        }
    }

    cout << dist[end];
}
