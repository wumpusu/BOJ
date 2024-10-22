#include <bits/stdc++.h>

using namespace std;

int factorial(int a){
    int tmp=1;
    
    for(int i=1;i<=a;i++){
        tmp *= i;
    }
    return tmp;
}


int main(){
    int n,k;
    
    cin >> n  >> k;
    
    cout << factorial(n) / (factorial(k) * factorial(n-k));
}