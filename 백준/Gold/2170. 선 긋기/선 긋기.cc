#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  vector <pair<int,int>> arr;
  arr.reserve(n);
  int maxline=0,minline=0;
  long long sum=0;
  
  cin >> n;
  
  for(int i=0;i<n;i++){
    int x, y ;
    cin >> x >> y;
    arr.push_back(make_pair(x,y));
  }
  
  sort(arr.begin(),arr.end());
  
  minline = arr[0].first;
  maxline = arr[0].second;
  
  for(int i=1;i<n;i++){
    if (arr[i].first > maxline){
      sum += maxline - minline;
      minline = arr[i].first;
      maxline = arr[i].second;
    }
    else{
      maxline = max(maxline,arr[i].second);
    }
    
  }
    
  sum += maxline - minline;
  
  cout << sum;
}