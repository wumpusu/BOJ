#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n,m;
  int x;
  
  ios::sync_with_stdio(false);     cin.tie(NULL);
  
  cin >> n >> m;

  vector<int> a;

  for(int i=0;i<n+m;i++){
    cin >> x;
    a.push_back(x);
  }

  sort(a.begin(),a.end());

  for(int i=0;i<n+m;i++){
    cout << a[i] << " ";
  }
}