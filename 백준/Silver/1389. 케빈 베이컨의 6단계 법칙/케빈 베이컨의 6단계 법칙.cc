#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> v;

int bfs(int start){
    vector<int> visited(n+1, -1);
    queue<int> q;
    visited[start] = 0;
    q.push(start);

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int nxt : v[cur]){
            if(visited[nxt] == -1){
                visited[nxt] = visited[cur]+1;
                q.push(nxt);
            }      
        }
    }

    int sum = 0;
    for(int i=1;i<=n;i++) {
      sum += visited[i];
      
    }
    return sum;
}

int main(){
    cin >> n >> m;
    v.assign(n+1, vector<int>());

    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int min_sum = 1e9;
    int ans = 0;

    for(int i=1;i<=n;i++){
        int sum = bfs(i);
        if(sum < min_sum){
            min_sum = sum;
            ans = i;
        }
    }

    cout << ans;
}
