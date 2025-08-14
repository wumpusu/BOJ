#include <bits/stdc++.h>

using namespace std;

int n, m;

char miro[100][100];
int visited[100][100] = { 0 };

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };


void BFS(int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = 1; 

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (miro[nx][ny] == '1' && visited[nx][ny] == 0) {
                visited[nx][ny] = visited[cx][cy] + 1;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++){
      for(int j= 0;j<m;j++){
         cin >> miro[i][j]; 
      }
    }
       

    BFS(0, 0);

    cout << visited[n - 1][m - 1] << '\n';
}