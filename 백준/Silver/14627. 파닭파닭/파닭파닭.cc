#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, c;
    cin >> s >> c;
    vector<long long> arr(s);
    long long sum=0;
    
    for (int i = 0; i < s; i++){
      cin >> arr[i];
      sum += arr[i];
    } 

    long long left = 1;
    long long right = *max_element(arr.begin(), arr.end());
    long long ans = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long cnt = 0;
        for (int i = 0; i < s; i++)
            cnt += arr[i] / mid;

        if (cnt >= c) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    long long a = sum-ans*c;
    
    cout << a;
}
