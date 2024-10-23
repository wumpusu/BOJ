#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    queue <int> q;
    int cnt=1;
    
    cin >> n >> k;
    
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    
    cout << "<";
    
    while(q.size() != 0){
    
    if(cnt%k == 0){
        if(q.size() == 1){
            cout << q.front() << ">";
            break;
        }
        else {
            cout << q.front() << ", ";
        q.pop();
        cnt++;
            
        }
    }
    else{
         int a=0;
         a = q.front();
         q.push(a);
         q.pop();
         cnt++;
    }
}
}