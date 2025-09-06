#include <bits/stdc++.h>
using namespace std;

struct Compare {
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) return a > b; 
        return abs(a) > abs(b);          
    }
};

int main() {
    priority_queue<int, vector<int>, Compare> pq;
    
      int x;
      
      cin >> x;
    
    for(int i=0;i<x;i++){
      int n;
      cin >> n;

      
      if(n == 0){
        if(pq.empty()){
          cout << 0 << '\n';
        } else{
        cout << pq.top() << '\n';
        pq.pop();
        }
      
    }
  else {
          pq.push(n);
        }
 }
}