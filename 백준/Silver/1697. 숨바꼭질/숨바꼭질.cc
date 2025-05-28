#include <bits/stdc++.h>

using namespace std;

int vi[100001] = {0};

int bfs(int n, int k){
  queue<int>q;
  q.push(n);
  vi[n] = 1;
  
  while(!q.empty()){
    int f = q.front();
    q. pop();
    
    if(f == k){
      return vi[f] - 1;
    }
    
    for(int next : {f-1 , f+1 , f*2}){
      if(next >= 0 && next < 100001 && !vi[next]){
        vi[next] = true;
        q.push(next);
        vi[next] = vi[f] + 1;
      }
    }
  }
}


int main(){
  int n,k;
  
  cin >> n >>k;
  
  cout << bfs(n,k);
}