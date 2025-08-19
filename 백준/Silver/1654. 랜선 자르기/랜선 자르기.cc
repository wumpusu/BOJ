#include <bits/stdc++.h>

using namespace std;

int arr[10001];

int main(){
  int k,n;
  
  cin >> k >> n;
  
  for(int i=0;i<k;i++){
    cin >> arr[i];
  }
  
  long long left = 1;
  long long right  = *max_element(arr,arr+k);
  long long ans = 0;
  
  while (left <= right){
    long long cnt = 0;
    long long mid = (left+right)/2;
    
    for(int i=0;i<k;i++){
      cnt += arr[i]/mid;
    }
    
    if(cnt>=n){
      ans = mid;
      left= mid+1;
    }
    else{
      right= mid-1;
    }
  }
  
  cout << ans;
  
  
  
}
