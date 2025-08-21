#include <bits/stdc++.h>

using namespace std;
int arr[1001][3];

int main(){
  int n;
  
  
  int cost[3];
  arr[0][0]=0;
  arr[0][1]=0;
  arr[0][2]=0;
  
  cin >> n;
  
  for(int i=0;i<n;i++){
    cin >> cost[0] >> cost[1] >> cost[2];
    
    arr[i][0] = min(arr[i-1][1], arr[i-1][2]) + cost[0];
    arr[i][1] = min(arr[i-1][0], arr[i-1][2]) + cost[1];
    arr[i][2] = min(arr[i-1][0], arr[i-1][1]) + cost[2];
  }
  
  cout << min({arr[n-1][0], arr[n-1][1], arr[n-1][2]});
}