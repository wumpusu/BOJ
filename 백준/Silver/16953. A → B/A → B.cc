#include <bits/stdc++.h>

using namespace std;

long long a,b;
int cnt=1;

int main(){
  cin >> a >> b;
  
  while(b>a){
  
  if(b%10 == 1){
    b/=10;
  }
  else if(b%2 ==0){
    b/=2;
  }
  else{
    break;
  }

    cnt++;
  }


  if(b == a){
    cout << cnt;
  }
  else {
    cout << -1;
  }
  
}