#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<pair<int,int>> v;

bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    
    return a.second < b.second;
    
}

int main(){
    int n;
    
    cin >> n;
    
    int x; int y;
    
    for(int i=0;i<n;i++){
        cin >> x >> y;
        
        v.push_back(make_pair(x,y));
    }
    
    sort(v.begin(),v.end(),cmp);
    
    
    for(int i=0;i<n;i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
}