#include <iostream>

using namespace std;

int main(){
    int n;
    int size[5]={0,};
    int t,p;
    
    cin >> n;
    
    for(int i=0;i<6;i++){
        cin >> size[i];
    }
    
    cin >> t >> p;
    
    int cnt=0;
    
    for(int i=0;i<6;i++){
       cnt += (size[i]+t -1) /t;
    }
    cout << cnt << '\n';
    cout << n/p << " " << n%p;
}