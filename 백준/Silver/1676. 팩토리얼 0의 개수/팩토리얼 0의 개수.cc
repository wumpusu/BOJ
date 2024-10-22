#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    
    int x5;
    int x25;
    int x125;
    
    cin >> n;
    
    x5 = n/5;
    x25 = n/25;
    x125 = n/125;
    
    cout << x5 + x25 + x125;
    
}