#include <bits/stdc++.h>

using namespace std;

int n;
int maap[26][26];
bool visited[26][26] = {false};
vector <int> ans;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

void bfs(int x, int y){
  queue <pair<int,int>> q;
  visited[x][y] = true;

  q.push({x,y});
  
  int cnt = 1;
  
  while(!q.empty()){
    int frontx = q.front().first;
    int fronty = q.front().second;
    q.pop();
    
    for(int i=0;i<4;i++){
      int nx = frontx + dx[i];
      int ny = fronty + dy[i];
      if(nx < 0 or ny < 0 or nx >= n or ny >=n){
        continue;
      }
      if(visited[nx][ny] == false and maap[nx][ny] == 1){
        q.push({nx,ny});
        visited[nx][ny] = true;
        cnt++;
      }
    }
  }
  ans.push_back(cnt);
}

int main(){
  
  cin >> n;
  
  for(int i=0;i<n;i++){
    string s;
    cin >> s;
    for(int j=0;j<n;j++){
      maap[i][j] = s[j] - '0';
    }
  }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(visited[i][j] == false and maap[i][j] == 1){
        bfs(i,j);
      }
    }
  }
  
 cout << ans.size() << '\n';
 sort(ans.begin(),ans.end());
 for(int i=0;i<ans.size();i++){
   cout << ans[i] << '\n';
 }
 
 return 0;
}