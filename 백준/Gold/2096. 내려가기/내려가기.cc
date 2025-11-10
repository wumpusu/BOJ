#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  
  cin >> n;
  
  int maxdp[3] = {0,0,0};
  int mindp[3] = {0,0,0};
  
  int a,b,c;
  cin >> a >> b >> c;
  
  maxdp[0] = mindp[0] = a;
  maxdp[1] = mindp[1] = b;
  maxdp[2] = mindp[2] = c;
  

  for(int i=1;i<n;i++){
    cin >> a >> b >> c;
    
    int maxpos0 = maxdp[0],maxpos1 = maxdp[1],maxpos2 = maxdp[2];
    int minpos0 = mindp[0],minpos1 = mindp[1],minpos2 = mindp[2];
    
    maxdp[0] = max(maxpos0,maxpos1)+a;
    maxdp[1] = max({maxpos0,maxpos1,maxpos2})+b;
    maxdp[2] = max(maxpos1,maxpos2)+c;
    
    mindp[0] = min(minpos0,minpos1)+a;
    mindp[1] = min({minpos0,minpos1,minpos2})+b;
    mindp[2] = min(minpos1,minpos2)+c;
  }
  
  cout << max({maxdp[0],maxdp[1],maxdp[2]}) << ' ' 
  << min({mindp[0],mindp[1],mindp[2]});
}