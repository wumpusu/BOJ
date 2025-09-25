#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  
  cin >> t;
  
  while(t--){
    int l,n;
    int maxtime=0,mintime=0;
    
    cin >> l >> n;
    
    for(int i=0;i<n;i++){
      int pos;
      cin >> pos;
      mintime = max(mintime,min(l-pos,pos));
      maxtime = max(maxtime,max(l-pos,pos));
    }
    
    cout << mintime << ' ' << maxtime << '\n';
  }
}