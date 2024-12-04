#include <bits/stdc++.h>

using namespace std;


int t, m, n, k, x, y,cnt;
int farm[50][50];
int xspot[4]={0,0,-1,1};
int yspot[4]={1,-1,0,0};

void dfs(int x,int y){
    farm[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		int xx = x + xspot[i];
		int yy = y + yspot[i];
		if (xx < 0 || yy < 0 || xx >= m || yy >= n) continue;
		if (farm[xx][yy] == 1) {
			dfs(xx, yy);
        }
    }
}


int main(){
    cin >> t;
	for (int q = 0; q < t; q++) {
		cin >> m >> n >> k;
		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			farm[x][y] = 1;
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (farm[i][j] == 1) {
					dfs(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << '\n';
		cnt = 0;
    
    }
}