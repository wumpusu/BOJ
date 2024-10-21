#include <bits/stdc++.h>

using namespace std;

int main(){
    while(1){
        string s;
        int cnt =0;
        cin >> s;
        if(s == "0"){
            return 0;
        }
        
        int len = s.size();
        
        for(int i=0;i<len/2;i++){
            if(s[i] != s[len-1-i]){
                continue;
            }
            else cnt++;
        }
        if(len/2 == cnt){
            cout << "yes" << '\n';
        }
        else 
            cout << "no" << '\n';
    }    
}
