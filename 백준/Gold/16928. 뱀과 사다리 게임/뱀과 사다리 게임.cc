#include <bits/stdc++.h>

using namespace std;

#define MAX 101

int borad[MAX];
bool visited[MAX] = {false};

int bfs(){
  queue <pair<int,int>> q;
  q.push({1,0});
  visited[1] = true;
  
  while(!q.empty()){
    auto[pos,cnt] = q.front();
    q.pop();
    
    if(pos == 100){
      return cnt;
    }
    
    for(int dice=1;dice<=6;dice++){
      int next = pos + dice;
      if(next > 100){
        continue;
      }
      
      next = borad[next];
      
      if(!visited[next]){
        visited[next] = true;
        q.push({next,cnt+1});
      }
      
    }
    
  }
  
}
int main(){
  int n,m;
  
  cin >> n >> m;
  
  for(int i=1;i<=100;i++){
    borad[i] = i;
  }
  
  for(int i=1;i<=n+m;i++){
    int u,v;
    cin >> u >> v;
    borad[u] = v;
  }
  
  cout << bfs();
}

