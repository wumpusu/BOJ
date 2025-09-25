#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  long long sum=0;
  
  cin >> n;
  
  vector <int> arr(n);
  int freq[8001] = {0};
  
  for(int i=0;i<n;i++){
    cin >> arr[i];
    sum+= arr[i];
    freq[arr[i]+4000]++;
  }
  int mean = (sum >= 0) ? (sum*1.0 / n + 0.5) : (sum*1.0 / n - 0.5);
  sort(arr.begin(),arr.end());
  
  int maxfreq = *max_element(freq, freq + 8001);
  vector<int> modes;
  for (int i = 0; i <= 8000; i++) {
      if (freq[i] == maxfreq) 
      modes.push_back(i - 4000);
  }
  sort(modes.begin(), modes.end());
  int mode = (modes.size() == 1) ? modes[0] : modes[1];
  
  cout << mean << '\n';
  cout << arr[n/2] << '\n';
  cout << mode << '\n';
  cout << arr[n-1] - arr[0] << '\n';
  
}