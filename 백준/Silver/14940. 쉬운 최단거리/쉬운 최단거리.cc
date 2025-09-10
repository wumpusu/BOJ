#include <bits/stdc++.h>

using namespace std;

int arr[1001][1001];
int result[1001][1001];
bool visited[1001][1001];
int n,m;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

void bfs(int x,int y){
  queue <pair<int,int>>q;
  
  q.push({x,y});
  visited[x][y] = true;
  result[x][y]  = 0;
  
  while(!q.empty()){
    pair<int,int> cur = q.front();
    for(int i=0;i<4;i++){
      int nx = cur.first + dx[i];
      int ny = cur.second + dy[i];
      
      if(nx < 0 or nx >= n or ny < 0 or ny >=m){
        continue;
      }
      if(arr[nx][ny] == 1 and !visited[nx][ny]){
        q.push({nx,ny});
        visited[nx][ny] = true;
        result[nx][ny] = result[cur.first][cur.second]+1;
      }
    }
    q.pop();
  }
    
}
int main(){
  int x,y,a;
  
  cin >> n >> m;
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a;
      arr[i][j] =a;
      
      if(a == 2){
        x = i;
        y = j;
      }
    }
  }
  
  bfs(x,y);
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
     if(arr[i][j] == 0){
    cout << 0 << ' ';
    }
    else if(i == x && j == y){
    cout << 0 << ' '; 
    }
    else if(result[i][j] == 0){
    cout << -1 << ' ';
    }
    else{
    cout << result[i][j] << ' ';
    }
    }
    cout << '\n';
  }
  
  return 0;
}