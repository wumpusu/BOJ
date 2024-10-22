#include <bits/stdc++.h>

using namespace std;

string ap;

int main(){
    int n;
    char c;
    long long tot=0;
    
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> ap[i];
    
    }
    
    for(int i=0;i<n;i++){
        c = ap[i];
       tot += (c - 96) * pow(31,i);
    }
    cout << tot;
}