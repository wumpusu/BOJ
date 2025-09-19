#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,b,a;
  
  cin >> n >> b >> a;
  
  int arr[100001];
  int sum=0;
  
  for(int i=0;i<n;i++){
    cin >> arr[i];  
  }
  
  sort(arr,arr+n);
  
  for(int i=0;i<n;i++){
    sum += arr[i] /2;
    
    if(i+1 > a){
      sum += arr[i-a]/2;
    }
    
    if(sum > b){
      cout << i;
      return 0;
    }
    
  }


  cout << n;
}