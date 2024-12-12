#include <bits/stdc++.h>

using namespace std;

priority_queue<int, vector<int>,greater<int>> q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    
    cin >> n;
     
     for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x==0){
            if(q.empty()){
                cout << '0' << '\n';
            }
            else{
                cout << q.top() << '\n';
                q.pop();
            }
        }
        else {
            q.push(x);
        }
        
        
    }
}