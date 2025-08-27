#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[1000][1000];
int dis[1000][1000];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	int M, N, day = 0;
	cin >> M >> N;
	queue<pair<int, int>> q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
			if (board[i][j] == 1) {
				q.push({ i,j });
				dis[i][j] = 1;
			}
		}
	}
	while (!q.empty()) {
		pair<int, int> cur = q.front(); q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int x = cur.X + dx[dir];
			int y = cur.Y + dy[dir];
			if (x < 0 || y < 0 || x >= N || y >= M) continue;
			if (dis[x][y] || board[x][y] == -1) continue;
			q.push({ x,y });
			board[x][y] = 1;
			dis[x][y] = dis[cur.X][cur.Y] + 1;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (board[i][j] == 0) {
				cout << -1;
				return 0;
			}
			day = max(day, dis[i][j]);
		}
	}
	cout << day - 1;
}