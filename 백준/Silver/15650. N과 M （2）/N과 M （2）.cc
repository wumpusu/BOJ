#include <bits/stdc++.h>

using namespace std;

int n,m;
int arr[9];

void dfs(int num,int k){
   
   if (k == m) { 
    for (int i = 0; i < m; i++){
      cout << arr[i] << " ";
    }
      cout << '\n';
    } 
    else { 
      for (int i = num; i <= n; i++) {
          arr[k] = i;      
          dfs(i + 1, k + 1);
        }
    }
}

int main(){
  
  cin >> n >> m;
  
  dfs(1,0);
  
}