#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  
  cin >> s;
  
  int ans=0, num=0;
  bool minus = false;
  
  for(int i=0;i<=(int)s.size();i++){
    if(s[i] == '-' or s[i] == '+' or i == (int)s.size()){
      
      if(minus){
        ans -= num;
      }
      else{
        ans += num;
      }
      num =0;
      
      
      if(i<(int)s.size() and s[i] == '-'){
        minus = true;
      }
    }
    else{
        num = num * 10 + (s[i] - '0');
      }
     
  }
  
  cout << ans;
}