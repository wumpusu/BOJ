#include <bits/stdc++.h> 
using namespace std;

int main(){
	
	int t;
	cin >> t;

	while (t--) {
	
		int n, m;
		cin >> n >> m;
		queue<pair<int, int>> que;
		priority_queue<int> pq; 
	
		for (int i = 0; i < n; i++) {
			int p;
			cin >> p;
			que.push({p, i});  
			pq.push(p);
		}
	
		int cnt = 1;
		
		while(1) {
			int p = que.front().first;
			int loc = que.front().second;
			if (p != pq.top()) {
				que.pop();
				que.push({p, loc});
			}
			else {
				if (loc == m) break;
				else {
					que.pop();
					pq.pop();
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}