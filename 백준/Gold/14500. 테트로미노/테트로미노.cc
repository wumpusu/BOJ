#include <bits/stdc++.h>

using namespace std;

#define MAX 501

bool visited[MAX][MAX] = {false};
int arr[MAX][MAX];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n,m;
int ans=0;

 void dfs(int x,int y,int deep,int sum){
   
   if(deep == 4){
     ans = max(ans,sum);
     return;
   }
   
   for(int i=0;i<4;i++){
     int nx = x + dx[i];
     int ny = y + dy[i];
     
     if(nx < 0 or nx >= n or ny >= m or ny < 0){
       continue;
     }
     if(!visited[nx][ny]){
       visited[nx][ny] = true;
       dfs(nx,ny,deep+1,sum+arr[nx][ny]);
       visited[nx][ny] = false;
     }
   }
 }
 
 void checkExtra(int x, int y) {
    if (x - 1 >= 0 && x + 1 < n && y - 1 >= 0) // ㅓ
        ans = max(ans, arr[x][y] + arr[x-1][y] + arr[x+1][y] + arr[x][y-1]);
    if (x - 1 >= 0 && x + 1 < n && y + 1 < m) // ㅏ
        ans = max(ans, arr[x][y] + arr[x-1][y] + arr[x+1][y] + arr[x][y+1]);
    if (x - 1 >= 0 && y - 1 >= 0 && y + 1 < m) // ㅗ
        ans = max(ans, arr[x][y] + arr[x][y-1] + arr[x][y+1] + arr[x-1][y]);
    if (x + 1 < n && y - 1 >= 0 && y + 1 < m) // ㅜ
        ans = max(ans, arr[x][y] + arr[x][y-1] + arr[x][y+1] + arr[x+1][y]);
}

 
int main(){

  cin >> n >> m;
  
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> arr[i][j];
    }
  }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      visited[i][j] = true;
      dfs(i,j,1,arr[i][j]);
      visited[i][j] = false;
      checkExtra(i,j);
    }
  }
  
  cout << ans;
}