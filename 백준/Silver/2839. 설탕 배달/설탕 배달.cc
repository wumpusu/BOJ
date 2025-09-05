#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    int cnt=0;
    
    cin >> n;
    
    while(n>=0){
        if(n%5==0){
            cnt += (n/5);
            cout << cnt;
            return 0;
        }
        n -= 3;
        cnt++;
    }
    
    cout << -1;
    
    
}