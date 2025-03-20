#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
   
    cin >> n;
    
    int arr[100001];
    int dp[100001];
    int result=0;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    dp[0] = arr[0];
    result = arr[0];
    
    for(int i=0;i<n;i++){
        dp[i] = max(arr[i], dp[i-1]+arr[i]);
        result = max(dp[i], result);
    }
    
    cout << result;
    
    
}