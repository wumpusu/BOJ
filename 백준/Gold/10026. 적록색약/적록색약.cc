#include <bits/stdc++.h>

using namespace std;

char arr[101][101];
int n;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
bool visited[101][101] = {false};

void dfs(int x,int y){
  
  visited[x][y] = true;
  
  for(int i=0;i<4;i++){
    int nx = dx[i] + x;
    int ny = dy[i] + y;
    
    if(nx < 0 and ny < 0 and nx > n and ny > n){
      continue;
    }
    if(visited[nx][ny] == false and arr[nx][ny] == arr[x][y]){
      dfs(nx,ny);
    }
  }
}


int main(){
  int cnt=0;
  
  cin >> n;
  
  for(int i=0;i<n;i++){
    string x;
    cin >> x;
    for(int j=0;j<n;j++){
      arr[i][j] = x[j];  
    }
  }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(!visited[i][j]) {
        dfs(i, j);  
        cnt++;
      }
    }
  }
  
  cout << cnt << ' ';
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j] == 'R'){
        arr[i][j] = 'G';
      }
    }
  }
  
  memset(visited, 0, sizeof(visited));
  
  cnt =0;
  
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(!visited[i][j]) {
        dfs(i, j);  
        cnt++;
      }
    }
  }

  cout << cnt;
  
}