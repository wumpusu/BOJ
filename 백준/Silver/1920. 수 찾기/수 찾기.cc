#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
  
    int n;
    int a[100000];
    vector<int>vx;
      
    cin >> n;
  
  for(int i=0;i<n;i++){
    cin >> a[i]; 
    vx.push_back(a[i]);
  }
  sort(vx.begin(),vx.end());
  
  int m;
  int x;
  
  cin >> m;
  for(int i=0;i<m;i++){
    cin >> x;
    if (binary_search(vx.begin(), vx.end(), x)) {
      cout << "1" << "\n";
    }
    else cout << "0" << "\n";
  }
}