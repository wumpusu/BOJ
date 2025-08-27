#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int cnt=1;
   long long min = 3e9;
   
    cin >> n;
    vector<pair<int,int>>v;

    int start[n];
    int end[n];

    for (int i = 0; i < n; i++){
       cin >> start[i] >> end[i];
            v.push_back(make_pair(end[i],start[i]));
    }

  sort(v.begin(),v.end());

min = v[0].first;

for(int i=1;i<=n;i++){
   if(v[i].second >= min){
      min = v[i].first;
      cnt++;
   }
}
  
cout << cnt;
  
}