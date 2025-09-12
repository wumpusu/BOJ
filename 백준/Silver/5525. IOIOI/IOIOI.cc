#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,m;
  string s;
  
  cin >> n >> m >> s;
  
  int cnt=0, ans=0;
  
  for(int i=1;i<m-1;i++){
    if(s[i-1] == 'I' and s[i] == 'O' and s[i+1] == 'I'){
      cnt++;
      
      if(cnt >= n){
        ans++;
      }
         i++;
    }
    else{
        cnt =0;
      }
    
  }
  
  cout << ans;
}