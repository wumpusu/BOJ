#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int arr[100001];

    cin >> n;
    
    arr[1] = 1;
    arr[2] = 3;

    for(int i=3;i<=n;i++){
        arr[i] = (arr[i - 1] + arr[i - 2] * 2)%10007;
    }
    
    cout << arr[n];
    
}