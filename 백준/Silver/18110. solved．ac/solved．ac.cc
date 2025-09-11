#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  
  cin >> n;
  
  if(n == 0){
    cout << 0;
    return 0;
  }
  
  vector <int> arr(n);
  
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  
  int cut = round(n *0.15);
  
  sort(arr.begin(),arr.end());
  
  int sum=0;
  
  for(int i=cut;i<n-cut;i++){
    sum += arr[i];
  }
  
  int cnt = n-2*cut;
  
  cout << (int)round((double)sum/cnt);
  
  
}