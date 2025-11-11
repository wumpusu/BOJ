#include <bits/stdc++.h>

using namespace std;
#define MAX 501

int arr[MAX][MAX];

int main(){
  int n;
  
  cin >> n;
   
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cin >> arr[i][j];
    }
  }
  
  vector<int> dp(n, 0);
  dp[0] = arr[0][0];

  for (int i = 1; i < n; ++i) {
    for (int j = i; j >= 0; --j) {
      if (j == i) {
        dp[j] = dp[j-1] + arr[i][j];    
        }           
        else if (j == 0) {
        dp[j] = dp[j] + arr[i][j];
        }            
        else{
          dp[j] = max(dp[j-1], dp[j]) + arr[i][j]; 
        }           
      }
    }
  cout << *max_element(dp.begin(),dp.end());
}