#include <bits/stdc++.h>

using namespace std;

int n,m;
vector<string> campus;
int dy[4]={0,0,-1,1};
int dx[4]={1,-1,0,0};
bool visited[601][601];

int bfs(int startx, int starty){
  queue <pair<int,int>> q;
  q.push({startx,starty});
  visited[startx][starty] = true;
  
  int cnt=0;
  
  while(!q.empty()){
    auto [x , y] = q.front();
    q.pop();
    
    for(int dir=0;dir<4;dir++){
      int nx = x + dx[dir];
      int ny = y + dy[dir];
      if(nx < 0 || ny < 0 || nx >=n || ny >=m){
        continue;
      }
      if(visited[nx][ny]){
        continue;
      }
      if(campus[nx][ny] == 'X'){
        continue;
      }
      visited[nx][ny] = true;
      if(campus[nx][ny]== 'P'){
        cnt++;
      }
      q.push({nx,ny});
      
    }
  
}
 return cnt;
}
int main(){
  int startx,starty;
  
  cin >> n >> m;
  campus.resize(n);
  
  for(int i=0;i<n;i++){
    cin >> campus[i];
    for(int j=0;j<m;j++){
      if(campus[i][j] == 'I'){
        startx = i;
        starty = j;
      }
    }
  }
  
 int ans = bfs(startx , starty);
 
 if(ans == 0){
   cout << "TT" << '\n';
 }
 else{
   cout << ans << '\n';
 }
}