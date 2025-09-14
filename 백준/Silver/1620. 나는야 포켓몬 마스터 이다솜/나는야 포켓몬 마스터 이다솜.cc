#include <bits/stdc++.h>

using namespace std;

int main(){
  
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    
  int n,m;
  
  cin >> n >> m;
  
  unordered_map <string,int> m1;
  vector<string> num(n+1);
 
  for(int i=1;i<=n;i++){
    string name;
    cin >> name;
    m1[name] = i;
    num[i] = name;
  }
  
   for (int i = 1; i <= m; i++) {
        string query;
        cin >> query;
        if (isdigit(query[0])) {  
            int n = stoi(query);
            cout << num[n] << "\n";
        } else {  
            cout << m1[query] << "\n";
        }
    }

    return 0;
}