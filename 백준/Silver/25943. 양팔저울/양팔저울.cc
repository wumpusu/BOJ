#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int cnt=0;
  
  cin >> n;
  
  int arr[10001];
  int w[7] = {1,2,5,10,20,50,100};
  int max=0;
  
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  
  for(int i=2;i<n;i++){
    if(arr[0] > arr[1])
    {
      arr[1] += arr[i];
    }
    else{
      arr[0] += arr[i];
    }  
  }
  
  sort(arr,arr+2);
  
  int tmp = arr[1] - arr[0];
  
  while(tmp > 0){
    for(int i=0;i<7;i++){
      if(tmp >= w[i]){
        max = w[i];
      }
    }
    tmp -= max;
    cnt++;
  }
  
  cout << cnt;
}