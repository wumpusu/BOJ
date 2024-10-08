#include <iostream>

using namespace std;

int main(){
    int t;
    int x,y;
    cin >> t;
    int H,W,N;
    
    for(int i=0;i<t;i++){
        cin >> H >> W >>N;
        
        y= N%H;
        x= N/H;
        
        if(y==0){
            cout << H*100 + x << '\n';
        }
        else cout << y*100 + (x+1) << '\n';
    }
    
}   