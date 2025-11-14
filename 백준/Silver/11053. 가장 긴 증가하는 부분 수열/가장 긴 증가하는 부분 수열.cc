#include <bits/stdc++.h>

using namespace std;

#define MAX 1001

int main(){
  int n;
  cin >> n;
  
  int arr[MAX];
  vector <int> dp(n,1);
  
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      if(arr[i] > arr[j]){
        dp[i] = max(dp[i], dp[j]+1);
      }
    }
  }
  
  cout << *max_element(dp.begin(),dp.end());
}