#include <bits/stdc++.h>

using namespace std;

bool mon =1;


int main(){
  int n,k,a;
  
  cin >> n >> k;
  
  int dp[101] = {0,};
  
  cin >> a;
  dp[0] = a;
  
  
  for(int i=1;i<n;i++){
    cin >> a;
    for(int j=0;j<k;j++){
      
     if(a > dp[j]){
        dp[j] = a;
        break;
      }
    
     if(a < dp[j] and j == k-1){
        mon = 0;
      }
    }
  }
  
  if(mon == 1){
    cout << "YES";
  }
  else{
    cout << "NO";
  }
  
  return 0;
}