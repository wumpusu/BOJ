#include <bits/stdc++.h>

using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
  
    int n=0;
    int m=0;
    
    cin >> n >> m;
    int dp[n+1];
    
    for(int i=1;i<=n;i++){
        cin >> dp[i];
    }
    
    for(int i=1;i<=n;i++){
        dp[i] += dp[i-1];
    }
    
    for(int i=0;i<m;i++){
          int a,b;
        cin >> a >> b;
        cout << dp[b]-dp[a-1] << '\n';
    }
}